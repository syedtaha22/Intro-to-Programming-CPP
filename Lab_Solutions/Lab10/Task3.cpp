/*
    Task 3:
        Write a function concatenateArrays that takes two 1D arrays of integers.
        The function should return a new array that concatenates the two arrays.
        For example, if the arrays are {1, 2, 3} and {4, 5, 6}, the result should
        be {1, 2, 3, 4, 5, 6}. In the main function, print the concatenated array
        to verify correctness.
*/

// Include the required libraries
#include <iostream>

// Declare the sizes of the arrays
constexpr int SIZE1 = 5;
constexpr int SIZE2 = 3;

// Function to concatenate two 1D arrays
int* concatenateArrays(int* arr1, int* arr2) {
    static int newArr[SIZE1 + SIZE2];  // Declare a new array to store the concatenated elements

    // Copy the elements from the first array
    for (int i = 0; i < SIZE1; i++) {
        newArr[i] = arr1[i];
    }

    // Copy the elements from the second array
    for (int i = 0; i < SIZE2; i++) {
        newArr[SIZE1 + i] = arr2[i];
    }

    return newArr;  // Return a pointer to the first element
}

// Function to print a 1D array
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Declare two arrays of integers
    int arr1[SIZE1] = { 1, 2, 3, 4, 5 };
    int arr2[SIZE2] = { 6, 7, 8 };

    // Print the original arrays
    std::cout << "Array 1: ";
    printArray(arr1, SIZE1);
    std::cout << "Array 2: ";
    printArray(arr2, SIZE2);

    // Call concatenateArrays to concatenate the two arrays
    int* concatenatedArr = concatenateArrays(arr1, arr2);

    // Print the concatenated array
    std::cout << "Concatenated Array: ";
    printArray(concatenatedArr, SIZE1 + SIZE2);

    return 0;
}