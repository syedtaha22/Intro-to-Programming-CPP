# Dynamic Memory in C++

## Memory in C++: Stack vs Heap

When you run a program, memory is allocated in two main regions:

1. **Stack:**
   - The stack is used for static memory allocation.
   - It is smaller and faster but limited in size.
   - Variables on the stack are automatically allocated and deallocated when they go out of scope.
   - Examples: Local variables, function call parameters.

2. **Heap:**
   - The heap is used for dynamic memory allocation.
   - It is larger and allows you to allocate memory during runtime.
   - Memory on the heap must be manually managed using the `new` and `delete` keywords.
   - Examples: Objects or arrays created during runtime.

### Key Difference:
- The stack is automatically managed, while the heap requires explicit management.

---

## Dynamic Memory Allocation with `new`

The `new` keyword is used to allocate memory on the heap at runtime. It returns the **memory address** of the allocated block.

### Example: Allocating Memory for a Single Variable
```cpp
#include <iostream>

int main() {
    int *ptr = new int; // Allocates memory for an integer on the heap.
    *ptr = 42;          // Assigns the value 42 to the memory block.

    std::cout << "Value: " << *ptr << std::endl; // Prints the value.
    std::cout << "Address: " << ptr << std::endl; // Prints the address of the memory block.

    return 0;
}
```

#### Explanation:
- `new int` allocates memory for an integer on the heap and returns the address of the memory block.
- `*ptr = 42` assigns the value `42` to the memory block.

Here's what happens in the background:
```cpp

- int *ptr = new int; // Allocates memory for an integer on the heap.

      Stack                 Heap
+---------------+     +---------------+
|               |     |               |
+---------------+     +---------------+
|               |     |               | 0x100
+---------------+     +---------------+
|  ptr = 0x100  |     |               |
+---------------+     +---------------+

- *ptr = 42; // Assigns the value 42 to the memory block.

      Stack                 Heap
+---------------+     +---------------+
|               |     |               |
+---------------+     +---------------+
|               |     |       42      | 0x100
+---------------+     +---------------+
|  ptr = 0x100  |     |               |
+---------------+     +---------------+

- return 0; // Program ends, stack memory is automatically deallocated.

        Stack                 Heap
+---------------+     +---------------+
|               |     |               |
+---------------+     +---------------+
|               |     |       42      | 0x100
+---------------+     +---------------+
|               |     |               |
+---------------+     +---------------+

The memory block allocated on the heap remains until explicitly deallocated using 'delete'.
```

## Deallocating Memory with `delete`

When you allocate memory on the heap using `new`, you **must** free it using `delete`. Failing to do so results in a **memory leak**, where allocated memory is no longer accessible but still consumes system resources.

Take the same example and add `delete ptr;` at the end to free the allocated memory:

### Example: Deallocating Memory
```cpp
#include <iostream>

int main() {
    int *ptr = new int; // Allocates memory for an integer on the heap.
    *ptr = 42;          // Assigns the value 42 to the memory block.

    std::cout << "Value: " << *ptr << std::endl; // Prints the value.
    std::cout << "Address: " << ptr << std::endl; // Prints the address of the memory block.

    // This time, we deallocate the memory block.
    delete ptr; // Deallocates the memory block.

    return 0;
}
```

In the background(memory), it looks like this:

```cpp
After 'int *ptr = new int;' and '*ptr = 42;':

      Stack                 Heap
+---------------+     +---------------+
|               |     |               |
+---------------+     +---------------+
|               |     |       42      | 0x100
+---------------+     +---------------+
|  ptr = 0x100  |     |               |
+---------------+     +---------------+

After 'delete ptr':

      Stack                 Heap
+---------------+     +---------------+
|               |     |               |
+---------------+     +---------------+
|               |     |               |
+---------------+     +---------------+
|  ptr = 0x100  |     |               |
+---------------+     +---------------+

ptr still holds the address but the memory block is deallocated, i.e it's not longer there.
Accessing *ptr now, leads to undefined behavior.

```

### Important Notes:
1. Always match each `new` with a corresponding `delete`.
2. Accessing memory after it’s been deallocated leads to undefined behavior.

---

## Dangling Pointers

A **dangling pointer** arises when:
- A pointer still points to memory that has already been deallocated.
- Accessing such memory leads to undefined behavior.

### Example: Dangling Pointer
```cpp
#include <iostream>

int main() {
    int *ptr = new int(42); // Allocates memory and initializes it to 42.
    delete ptr;             // Frees the memory block.

    // The pointer still holds the address of the deallocated memory.
    std::cout << *ptr << std::endl; // Undefined behavior (dangling pointer).

    ptr = nullptr; // Best practice: Set the pointer to nullptr after deletion.

    return 0;
}
```

In memory, it looks like this:

```cpp

After 'int *ptr = new int(42);':

      Stack                 Heap
+---------------+     +---------------+
|               |     |               |
+---------------+     +---------------+
|               |     |       42      | 0x100
+---------------+     +---------------+
|  ptr = 0x100  |     |               |
+---------------+     +---------------+

After 'delete ptr':

      Stack                 Heap
+---------------+     +---------------+
|               |     |               |
+---------------+     +---------------+
|               |     |               |
+---------------+     +---------------+
|  ptr = 0x100  |     |               |
+---------------+     +---------------+

ptr still holds the address but the memory block is deallocated, i.e it's not longer accessible.
Accessing *ptr now, leads to undefined behavior.

After 'ptr = nullptr':

      Stack                 Heap
+---------------+     +---------------+
|               |     |               |
+---------------+     +---------------+
|               |     |               |
+---------------+     +---------------+
| ptr = nullptr |     |               |
+---------------+     +---------------+

ptr is set to nullptr to avoid dangling pointers.
```



#### Best Practices to Avoid Dangling Pointers:
1. Always set pointers to `nullptr` after using `delete`.
2. Use smart pointers (e.g., `std::unique_ptr`, `std::shared_ptr`) for automatic memory management.

---

## Wrapping Up

Dynamic memory allocation gives you flexibility but comes with the responsibility of managing memory manually. Here's a summary of the key points:
- Use `new` to allocate memory on the heap.
- Use `delete` to free allocated memory.
- Always avoid dangling pointers by setting pointers to `nullptr` after deletion.

Next, we’ll explore **dynamic memory allocation for arrays** in [DynamicArrays.md](DynamicArrays.md).
