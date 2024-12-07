# Linked Lists

## Arrays and Their Limitations

Arrays in C++ are a fundamental data structure. They allow us to store multiple elements of the same type in a contiguous block of memory. However, arrays have a key limitation: **fixed size**. Once an array is declared, its size cannot be changed.

For example, if we start with an array of 10 elements but later want to store 20 elements, we will need to **resize** the array. Typically, resizing involves creating a new, larger array, copying the old data into it, and then adding new elements. This process can be inefficient and costly, especially as the size of the array increases.

To solve this problem, let's explore an approach that allows us to manage memory more dynamically without the need for resizing: **Linked Lists**.

## Dynamic Memory Allocation Logic

Instead of allocating a large, contiguous block of memory like an array, we can allocate memory **on-demand**. In this approach, we don't need to know the size of the list beforehand. Each time we want to add a new element, we create a new "block" of memory for that element.

Here’s the basic idea:

1. We maintain a pointer, `head`, which points to the **first element** in the list. Initially, when the list is empty, `head` points to `nullptr` (nothing).
2. When we want to add a new element, we create a new **block** that contains:
   - Some **data** (the value we want to store).
   - A pointer to the **next block** in the list. Initially, this pointer will be `nullptr` because it’s the last block.
3. To link blocks together, the previous block’s pointer will point to the new block, forming a chain of blocks.

This method allows us to add new elements dynamically, without needing to resize or copy data, unlike arrays.

## Defining an Element Block

Each element in our list is a **block** of memory, and we will refer to these blocks as **nodes**. Each node contains two key components:
1. **Data**: The actual value or information that we want to store.
2. **Pointer to the next node**: A pointer that links to the next node in the list. If it’s the last node, this pointer is `nullptr`.

Here’s a simple illustration of a node:

```
+--------------+
|     Data     | -> Pointer to the next node
+--------------+
```

Each node holds a value (data) and the address of the next node in the list. By connecting these nodes, we can create a list of elements that are "linked" together via pointers, hence the name **Linked List**.

We'll see how to create a linked list of integers, but the same logic can be applied to other data types as well.

## Creating a Linked List

In our implementation, we'll define a `Node` struct that contains:
- A `data` field for storing the element.
- A `next` pointer for linking to the next node.
- We'll also define two constructers
    - A default constructor that initializes the `data` to 0 and `next` to `nullptr`.
    - A parameterized constructor that initializes the `data` to the given value and `next` to `nullptr`.

Here’s how we would define it:

```cpp
struct Node {
    int data;      // Data stored in the node
    Node* next;    // Pointer to the next node

    // Default constructor
    Node() : data(0), next(nullptr) {}

    // Parameterized constructor
    Node(int value) : data(value), next(nullptr) {}
};
```

To initialize a list, we'll first create the head, which is a pointer to a Node. Initially, the list is empty, so the head points to `nullptr` (Nothing).

```cpp
Node* head = nullptr;  // Empty list, head points to nullptr
```

### Traversing the Linked List

Before we dive into constructing the linked list, let's first get familiar with how to move around the list.

A typical linked list looks as follows:

```cpp
head
 \
  2 -> 4 -> 6 -> 8 -> nullptr
```

In this example:
- Each `number ->` represents a **node**, which contains some data (the number) and a pointer to the next node.
- The last node in the list points to `nullptr`, indicating the end of the list.
- The `head` of the list (the first node) contains the value `2` and points to the next node, which contains `4`, and so on.

Now, imagine you want to get to the end of the list, starting from the `head`. How can you do this?

It's simple! You start at the `head` and keep moving to the next node until you reach `nullptr`, which marks the end of the list.

Here’s how we can achieve this in C++:

```cpp
// Start at the head of the list
Node* temp = head;
// While the next node is not nullptr,
while (temp->next != nullptr) {
    // Move to the next node
    temp = temp->next;
}
```

### Explanation:
- We initialize a pointer `temp` that points to the `head` of the list.
- We then check if `temp->next` is not `nullptr`, meaning there is a next node to move to.
- If there is a next node, we update `temp` to point to the next node (`temp = temp->next`).
- This process continues until we reach the last node, where `temp->next` is `nullptr`.

At the end of this process, `temp` will point to the last node in the list.

Before we move on, take a moment to comprehend what we’ve done here. If you have any doubts, try **dry-running** this code on paper. It will help you understand how we are moving through the list, one node at a time.

### Adding an Element

When we want to add an element to the list, we follow these steps:
1. We create a new node with the desired data.
2. Then, we add this node to the end of the list, by traversing to the last node and updating its `next` pointer to point to the new node. There are two cases to consider here,
   - If the list is empty (head is `nullptr`), the new node becomes the head.
   - If the list is not empty, we traverse to the last node and update its `next` pointer.

Here’s how we can add a new element to the list:
```cpp

// Create a new node with the given data
Node* newNode = new Node(data); 

// If the list is empty, i.e., head is nullptr, set the head to be this new node.
if (head == nullptr) head = newNode;
// Otherwise, if the list is not empty, traverse to the last node
else{
    // Traverse to the last node
    Node* temp = head;
    while (temp->next != nullptr) temp = temp->next;
    // Make the last node point to this new node
    temp->next = newNode;
}
```

### Printing the Linked List

We can print the contents of the list by simply traversing through the nodes and printing the `data` of each node.

```cpp
Node* temp = head;
while (temp != nullptr) {
    std::cout << temp->data << " -> ";
    temp = temp->next;
}
std::cout << "nullptr" << std::endl;  // End of list
```

### Deleting the Linked List

To delete the linked list, we need to go through each node and free the memory allocated for it. This is important to avoid memory leaks.

```cpp
Node* temp = head; // Start at the head
while (head != nullptr) {
    head = head->next; // Move head forward
    delete temp;       // Delete the current node
    temp = head;       // Move temp to the new head
}
```

The above code, starts deleting the nodes from the head and moves forward until the list is empty.


## Summary

In a linked list, each element (node) is dynamically allocated and linked to the next one. This structure allows us to:
- Add elements without resizing or copying data.
- Dynamically allocate memory as needed.
- Use pointers to connect elements in the list.

This approach solves the limitations of arrays and provides a more flexible and efficient way to store and manage data.

Now that we've learned how to create and manipulate linked lists, let's explore how to implement this using nodes in C++. The complete implementation is available in the [LinkedLists.cpp](examples/LinkedLists.cpp).

C++ provides another powerful way to manage arrays, known as **vectors**, which offer dynamic resizing and are more flexible than traditional arrays. To learn more about vectors, check out the [Vectors.md](Vectors.md) file.
