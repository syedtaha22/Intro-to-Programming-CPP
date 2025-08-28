/*
    Task 2:
        Create a function swapElements that takes two pointers to integers
        as parameters and swaps their values.

        In the main function, declare an array of integers, then call
        swapElements to swap two elements within the array using pointers.
        Print the array before and after the swap to verify the changes.
*/

// Include the required libraries
#include <iostream>

// Function to swap the elements of two pointers
void swapElements(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to Print an array
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Declare an array of integers
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print the array before the swap
    std::cout << "Array before swap: ";
    printArray(arr, size);

    // Call swapElements to swap two elements within the array
    swapElements(&arr[1], &arr[3]);

    // Print the array after the swap
    std::cout << "Array after swap: ";
    printArray(arr, size);

    return 0;
}