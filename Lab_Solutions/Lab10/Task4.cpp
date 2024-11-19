/*
    Task 4:
        Write a function findSum that takes a pointer to the start of an
        integer array and the array’s size, then calculates and returns the
        sum of the elements using pointer arithmetic (without indexing).

        In the main function, declare an array, call findSum, and print the result.
*/

// Include the required libraries
#include <iostream>

// Function to find the sum of elements in an array using pointer arithmetic
int findSum(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

// Function to print array
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;
}


int main() {
    // Declare an array of integers
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print the array
    std::cout << "Array: ";
    printArray(&arr[0], size);

    // Call findSum to calculate the sum of the elements
    int sum = findSum(&arr[0], size);

    // Print the sum of the elements
    std::cout << "Sum of elements: " << sum << std::endl;

    return 0;
}