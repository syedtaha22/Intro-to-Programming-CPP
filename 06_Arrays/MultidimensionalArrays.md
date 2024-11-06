# Multidimensional Arrays in C++

## Overview

In C++, you can create arrays with more than one dimension, which are called multidimensional arrays. These arrays are useful for representing data structures like matrices, tables, or grids. A two-dimensional array is the most common type of multidimensional array, but you can have arrays with three or more dimensions if needed.

## Declaring Multidimensional Arrays

To declare a two-dimensional array, you specify the type of elements, followed by two sets of square brackets. The first bracket represents the number of rows, and the second represents the number of columns:

```cpp
int matrix[3][4];
```

This declares a 2D array named `matrix` with 3 rows and 4 columns, meaning it can hold a total of `3 * 4 = 12` elements. Just like one-dimensional arrays, the elements are not initialized by default and will contain garbage values unless initialized.

### Higher Dimensions

You can declare arrays with more than two dimensions in a similar way. For example, a 3D array might look like this:

```cpp
int cube[3][4][5];  // A 3D array with dimensions 3x4x5
```

## Initializing Multidimensional Arrays

Multidimensional arrays can be initialized in a nested list form. Here’s an example of how to initialize a 2D array:

```cpp
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

This creates a 2x3 matrix where the first row contains `1, 2, 3` and the second row contains `4, 5, 6`.

You can also initialize arrays partially, with the remaining elements set to 0:

```cpp
int matrix[2][3] = {
    {1, 2},      // The third element will be 0
    {4}          // The second and third elements will be 0
};
```

For higher-dimensional arrays, initialization follows a similar structure but with more levels of nesting.

## Accessing Elements in Multidimensional Arrays

To access elements in a multidimensional array, you use multiple indices. The first index represents the row, and the second represents the column:

```cpp
int value = matrix[1][2];  // Access the element at row 1, column 2 (third element in the second row)
```

You can modify elements in the same way:

```cpp
matrix[0][1] = 10;  // Change the element in row 0, column 1 to 10
```

### Traversing Multidimensional Arrays

You can use nested loops to traverse through a multidimensional array. For a 2D array, you can use a loop for rows and another loop inside it for columns:

```cpp
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        cout << matrix[i][j] << " ";
    }
    cout << endl;
}
```

This loop prints each element of the 2D array `matrix` row by row.

## Multidimensional Arrays in Memory

In C++, multidimensional arrays are stored in row-major order. This means that all elements of the first row are stored contiguously in memory, followed by all elements of the second row, and so on. For example, in a 2x3 array, the elements are stored in memory like this:

```
[1][2][3][4][5][6]
```

This is important to know when working with large arrays, as accessing elements row by row is generally faster due to the way memory is laid out.

## Limitations of Multidimensional Arrays

- **Fixed Size**: Like regular arrays, multidimensional arrays have a fixed size, and their dimensions must be known at compile-time.
- **Complexity**: Higher-dimensional arrays can become difficult to manage and understand as the number of dimensions increases.
- **Memory Usage**: Multidimensional arrays can use a significant amount of memory, especially for large arrays or higher dimensions.

## Summary

Multidimensional arrays are a powerful tool for working with tabular or grid-like data. In this section, you’ve learned how to declare, initialize, and traverse two-dimensional arrays, and how higher-dimensional arrays work. Keep in mind that multidimensional arrays are stored in row-major order, which can affect performance in certain use cases.

Next, explore the [Function](../07_Functions/README.md) section to learn about using functions with arrays and how to pass arrays as function arguments.
