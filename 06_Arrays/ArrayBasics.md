# Array Basics in C++

## Overview

An array is a collection of variables that are of the same type, stored in contiguous memory locations. Arrays in C++ allow you to store multiple values under a single variable name, making it easier to manage data sets like lists of numbers or strings. Arrays are a static data structure, meaning their size is fixed when they are declared.

## Declaring Arrays

To declare an array in C++, you specify the type of elements and the number of elements (size) in square brackets. For example:

```cpp
int myArray[5];
```

This declares an array of integers named `myArray` that can hold 5 elements. By default, array elements are not initialized, so they will contain garbage values unless you explicitly initialize them.

## Initializing Arrays

You can initialize arrays at the time of declaration by providing a list of values inside curly braces:

```cpp
int myArray[5] = {10, 20, 30, 40, 50};
```

If you omit the size, the compiler will automatically set the array size based on the number of values you provide:

```cpp
int myArray[] = {10, 20, 30, 40, 50}; // Array of size 5
```

### Default Initialization

If you initialize only some elements, the rest will be set to 0 for basic types like `int`:

```cpp
int myArray[5] = {10, 20}; // Remaining elements initialized to 0
```

## Accessing Array Elements

You can access elements of an array using their index. Array indexing starts from 0, meaning the first element has an index of 0, the second has an index of 1, and so on. To access or modify an element:

```cpp
int firstElement = myArray[0];  // Access the first element
myArray[2] = 100;               // Modify the third element
```

If you try to access an index that is outside the array’s bounds (e.g., accessing the 6th element of a 5-element array), it will result in undefined behavior.

## Common Operations

### Traversing an Array

You can loop through the array using a `for` loop to access or modify all elements:

```cpp
for (int i = 0; i < 5; i++) {
    cout << myArray[i] << " ";
}
```

### Modifying Array Elements

To update elements within an array, simply assign new values using the index:

```cpp
myArray[1] = 25;  // Set the second element to 25
```

## Array Limitations

- **Fixed Size**: Arrays in C++ have a fixed size, which cannot be changed after the array is created. If you need a dynamic array, consider using data structures like `std::vector` from the C++ Standard Library.
- **No Bounds Checking**: C++ does not perform bounds checking on arrays, meaning it's up to you to ensure you don't access out-of-bounds indices. Failing to do so can lead to undefined behavior.

## Summary

Arrays are useful for storing and managing multiple values of the same type under one variable name. Key concepts include declaring arrays, initializing them, and accessing their elements through indexing. However, arrays have a fixed size and no bounds checking, so use them carefully.

Next, move on to [Multidimensional Arrays](MultidimensionalArrays.md) to learn how arrays can be expanded into multiple dimensions for more complex data storage.
