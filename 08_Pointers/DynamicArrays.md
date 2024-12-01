# Dynamic Arrays in C++

## Static Arrays:

A **static array** is an array whose size is fixed at compile time and is allocated on the **stack**. These arrays are easy to use but come with several limitations.

### Example: Static Array
```cpp
int a = 1;
int arr[2] = {1, 2};
int b = 2;
```

### Memory Layout
Static arrays are stored contiguously in the stack:
```cpp
Stack:
    0x1          0x2          0x3          0x4
+------------+------------+------------+------------+
|   a = 1    | arr[0] = 1 | arr[1] = 2 |   b = 2    |
+------------+------------+------------+------------+

Heap:
(No dynamic memory allocated)
```

### Accessing Array Elements
- To access elements, we use the `[]` operator:
  ```cpp
  int value = arr[1]; // Accesses the second element of the array.
  ```
- Internally, `arr[i]` is equivalent to:
  ```cpp
  *(arr + i)
  ```
  For example:
  - `arr[0]` → `*(arr + 0)` → Dereferences address `0x2`, gives `1`.
  - `arr[1]` → `*(arr + 1)` → Dereferences address `0x3`, gives `2`.

### Undefined Behavior
Accessing an index outside the array bounds leads to **undefined behavior**:
```cpp
std::cout << arr[2]; // May crash or print garbage.
```

### Limitations of Static Arrays
1. **Fixed Size:**
   - The size of a static array must be known at compile time. 
   - Example:
     ```cpp
     int size = 2;
     int arr[size]; // Error: Size must be a compile-time constant.
     ```
2. **Stack Memory Limitation:**
   - Static arrays are stored on the stack, which has limited memory. Large arrays may cause a **stack overflow**.
   - Example:
     ```cpp
     int largeArray[100000]; // Likely to cause a stack overflow.
     ```
3. **Inflexibility:**
   - Once declared, the size of a static array cannot be changed. This makes them unsuitable for scenarios where the size is dynamic or unknown beforehand.

---

## Dynamic Arrays: Overcoming the Limitations of Static Arrays

Dynamic arrays address the limitations of static arrays by:
1. Allowing the size to be determined at runtime.
2. Allocating memory on the **heap**, which is larger and more flexible than the stack.

### Creating a Dynamic Array
To create a dynamic array, use the `new` keyword:
```cpp
int* arr = new int[2];
```

---

### What Happens When We Dynamically Create an Array?

When we allocate a dynamic array:
1. A contiguous block of memory is allocated on the **heap**.
2. A pointer to the first element is stored in the **stack**.

### Memory Layout
#### Step 1: Allocation
```cpp
int* arr = new int[2];
```
```cpp
      Stack                   Heap
+---------------+          +--------+
|   arr=0x100   | -------> | arr[0] | 0x100
+---------------+          +--------+
                           | arr[1] | 0x101
                           +--------+
```

#### Step 2: Assigning Values
```cpp
arr[0] = 1;
arr[1] = 2;
```
```cpp
      Stack                   Heap
+---------------+          +-------+
|   arr=0x100   | -------> |   1   | 0x100
+---------------+          +-------+
                           |   2   | 0x101
                           +-------+
```

### Accessing Array Elements
- **Direct Access:**
  ```cpp
  int first = arr[0]; // Accesses *(arr + 0), gives 1.
  int second = arr[1]; // Accesses *(arr + 1), gives 2.
  ```
- **Pointer Arithmetic:**
  ```cpp
  *arr;       // Dereferences the first element (1).
  *(arr + 1); // Calculates 0x100 + 1 = 0x101, gives 2.
  ```

---

### Dynamic 2D Arrays

A dynamic 2D array is an array of pointers where each pointer points to a row allocated on the heap.

#### Example: Creating a Dynamic 2D Array
```cpp
int rows = 2, cols = 3;

// Allocate row pointers.
int** arr = new int*[rows];

// Allocate each row.
for (int i = 0; i < rows; i++) {
    arr[i] = new int[cols];
}

// Assign values.
arr[0][0] = 1; arr[0][1] = 2; arr[0][2] = 3;
arr[1][0] = 4; arr[1][1] = 5; arr[1][2] = 6;
```

#### Memory Layout
```cpp
 Stack                   Heap
+-----+       +--------+       +---+
| arr | ----> | arr[0] | ----> | 1 | arr[0][0]
+-----+       +--------+       +---+
              | arr[1] | --+   | 2 | arr[0][1]
              +--------+   |   +---+
                           |   | 3 | arr[0][3]
                           |   +---+
                           |
                           |   +---+
                           +-> | 4 | arr[1][0]
                               +---+ 
                               | 5 | arr[1][1]
                               +---+
                               | 6 | arr[1][2]
                               +---+
```

---

### Deleting Dynamic Arrays

To avoid memory leaks, always deallocate dynamic arrays:
- **1D Arrays:**
  ```cpp
  delete[] arr;
  ```
- **2D Arrays:**
  ```cpp
  // Deallocate each subarray
  for (int i = 0; i < rows; i++) {
      delete[] arr[i];
      arr[i] = nullptr;
  }
  delete[] arr; // Dellocate the main array
  arr = nullptr;
  ```

---

### Pqointer Arithmetic Recap
Dynamic arrays rely on **pointer arithmetic** for element access:
- `arr[i]` → `*(arr + i)`
- `arr[0][j]` → `*(*(arr + 0) + j)`

---

### Higher-Dimensional Arrays
Dynamic memory allocation for arrays can be extended to 3D or higher dimensions by following similar steps. However, higher-dimensional arrays are rarely used in practice due to their complexity.

---

We’ll explore **Pointer Arithmetic** in more detail in [PointerArithmetic.md](PointerArithmetic.md). 