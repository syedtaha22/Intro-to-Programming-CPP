# Vectors in C++

## Overview

Vectors in C++ are part of the Standard Template Library (STL) and provide a dynamic array-like structure that can grow and shrink in size during runtime. Unlike arrays, vectors automatically manage their size, allowing you to add and remove elements without worrying about resizing. They provide a convenient and efficient way to handle collections of data.

Vectors offer a flexible and easy-to-use interface, especially when dealing with data that changes size over time. They are particularly useful when you don't know the exact size of the data in advance, or when you need to frequently add or remove elements.

## Basic Syntax

To use vectors in C++, you need to include the `vector` header:

```cpp
#include <vector>
```

You can declare a vector in the following way:

```cpp
std::vector<int> numbers;  // A vector of integers
```

Here, `std::vector<int>` creates a vector that holds integers. Vectors can store elements of any type (e.g., `double`, `string`, etc.), and the type is specified inside the angle brackets (`<>`).

### Initializing a Vector with Values

You can initialize a vector with values directly:

```cpp
std::vector<int> numbers = {1, 2, 3, 4, 5};
```

Alternatively, you can also create a vector with a predefined size and default values:

```cpp
// Vector with 5 elements, each initialized to 0
std::vector<int> numbers(5, 0);  
```

Or, you can create an empty vector and add elements later:

```cpp
std::vector<int> numbers;  // Empty vector
```

## Common Functions and Operations

Vectors in C++ offer several useful functions that help you manage elements. Some of the most commonly used functions are:

### 1. `push_back()`
- **Purpose**: Adds an element to the end of the vector.
- **Syntax**: `vector.push_back(value);`

```cpp
std::vector<int> numbers;
numbers.push_back(10);  // Adds 10 to the vector
numbers.push_back(20);  // Adds 20 to the vector
```

### 2. `size()`
- **Purpose**: Returns the number of elements in the vector.
- **Syntax**: `vector.size();`

```cpp
std::vector<int> numbers = {1, 2, 3};
std::cout << "Size of vector: " << numbers.size() << std::endl;  // Outputs 3
```

### 3. `at()`
- **Purpose**: Accesses an element at a specified index, with bounds checking.
- **Syntax**: `vector.at(index);`

```cpp
std::vector<int> numbers = {1, 2, 3};
std::cout << "Element at index 1: " << numbers.at(1) << std::endl;  // Outputs 2
```

### 4. `[]` (Indexing Operator)
- **Purpose**: Accesses an element at a specified index (without bounds checking).
- **Syntax**: `vector[index];`

```cpp
std::vector<int> numbers = {1, 2, 3};
std::cout << "Element at index 2: " << numbers[2] << std::endl;  // Outputs 3
```

### 5. `pop_back()`
- **Purpose**: Removes the last element from the vector.
- **Syntax**: `vector.pop_back();`

```cpp
std::vector<int> numbers = {1, 2, 3};
numbers.pop_back();  // Removes the last element, which is 3
```

### 6. `clear()`
- **Purpose**: Removes all elements from the vector.
- **Syntax**: `vector.clear();`

```cpp
std::vector<int> numbers = {1, 2, 3};
numbers.clear();  // Removes all elements
```

### 7. `front()` and `back()`
- **Purpose**: Accesses the first and last element of the vector, respectively.
- **Syntax**: `vector.front()` and `vector.back()`

```cpp
std::vector<int> numbers = {1, 2, 3};
std::cout << "First element: " << numbers.front() << std::endl;  // Outputs 1
std::cout << "Last element: " << numbers.back() << std::endl;    // Outputs 3
```

### 8. `empty()`
- **Purpose**: Checks if the vector is empty.
- **Syntax**: `vector.empty();`

```cpp
std::vector<int> numbers = {1, 2, 3};
if (numbers.empty()) {
    std::cout << "Vector is empty." << std::endl;
} else {
    std::cout << "Vector is not empty." << std::endl;
}
```

### 9. Iterating Over a Vector
You can iterate over a vector using a range-based for loop:

```cpp
std::vector<int> numbers = {1, 2, 3};
for (int num : numbers) {
    std::cout << num << " ";
}
// Outputs: 1 2 3
```

or you can also use the traditional for loop:

```cpp
std::vector<int> numbers = {1, 2, 3};
for (int i = 0; i < numbers.size(); i++) {
    std::cout << numbers[i] << " ";
}
// Outputs: 1 2 3
```

## Conclusion

Vectors provide a powerful and flexible alternative to traditional arrays in C++. They manage memory dynamically, automatically resizing as elements are added or removed, making them ideal for cases where the size of the data is not known in advance. They offer a variety of useful functions like `push_back()`, `size()`, `at()`, and more to manipulate the data effectively.

Once you're comfortable with vectors, you can explore more advanced topics like iterators and multi-dimensional vectors. For now, continue practicing and experimenting with vectors to solidify your understanding.

For examples, and practice problems, refer to the [Examples](examples/) and [Practice Questions](practice_questions/) directories, respectively.