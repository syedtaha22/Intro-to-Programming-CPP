/*
    Task 5:
        Write a program that allocates memory for 10 integers using a loop, assigning each
        integer a random value. Store the memory addresses of these integers in an array.

        Pass this array of memory addresses to a function called reverseArray, which should
        recursively reverse the values stored at the allocated memory addresses
        (not the array of addresses themselves).

        For example, if the array of addresses contains {0x1, 0x2}, and the value at
            0x1 is x, and at
            0x2 is y,
        after calling reverseArray, the values should be swapped:
            0x1 should contain y and,
            0x2 should contain x.
        Ensure that the dynamically allocated memory is properly freed after use.

*/

// Include the required libraries
#include <iostream>
#include <ctime>
#include <random>

// Function to reverse the values stored at the allocated memory addresses
void reverseArray(int** arr, int start, int end) {
    // Base case: If the start index is greater than or equal to the end index
    if (start >= end) return;

    // Swap the values stored at the memory addresses
    int temp = **(arr + start);
    **(arr + start) = **(arr + end);
    **(arr + end) = temp;

    // Recursive call to reverse the remaining elements
    reverseArray(arr, start + 1, end - 1);
}

// Wrapper function to reverse the values stored at the allocated memory addresses
void reverseArray(int** arr, int size) {
    reverseArray(arr, 0, size - 1);
}

//  Helper function to print the values stored at the memory addresses
void printArray(int** arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << **(arr + i) << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Seed the random number generator
    srand(time(0));

    // Allocate memory for 10 integers
    int* arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = new int;
        *arr[i] = rand() % 100;  // Assign a random value
    }

    // Print the original values
    std::cout << "Original Values: ";
    printArray(arr, 10);

    // Call the reverseArray function to reverse the values
    reverseArray(arr, 10);

    // Print the reversed values
    std::cout << "Reversed Values: ";
    printArray(arr, 10);

    // Free the dynamically allocated memory
    for (int i = 0; i < 10; i++) {
        delete arr[i];
        arr[i] = nullptr;
    }

    return 0;
}