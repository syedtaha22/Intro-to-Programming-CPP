/*
    Task 5:
        Write a function invertSymmetrically that takes an 8x8 array of integers as
        input, performs a 180-degree rotation, and returns the new 8x8 array.

        In a 180-degree rotation, each element at position (i, j) is swapped with the element
        at (7-i, 7-j), effectively inverting the matrix symmetrically from both axes.

        Write a helper function getArray that returns an 8x8
        array with values 0-64.

        In the main function:
            1. Call the getArray function to get the 8x8 array.
            2. Call invertSymmetrically with the original array and store the returned array.
            3. Print both the original and the symmetrically inverted (rotated) array to compare
               them and verify the transformation.

        Your function must have the following prototypes:
            • int (*getArray())[8];
            • int (*invertSymmetrically(int (*arr)[8]))[8];

*/

// Include the required libraries
#include <iostream>
#include <iomanip>

// Declare the size of the 8x8 array
constexpr int SIZE = 8;

// Function to get an 8x8 array with values 0-64
int (*getArray())[SIZE] {
    static int arr[SIZE][SIZE];  // Declare a new 8x8 array

    // Fill the array with values 0-64
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            arr[i][j] = count++;
        }
    }

    return arr;  // Return a pointer to the first element
}

// Function to invert an 8x8 array symmetrically
int (*invertSymmetrically(int (*arr)[SIZE]))[SIZE] {
    static int newArr[SIZE][SIZE];  // Declare a new 8x8 array to store the inverted elements

    // Perform a 180-degree rotation
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            newArr[i][j] = arr[SIZE - 1 - i][SIZE - 1 - j];
        }
    }

    return newArr;  // Return a pointer to the first element
}

// Function to print an 8x8 array
void printArray(int (*arr)[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            std::cout << std::setw(3) << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // Call getArray to get the original 8x8 array
    int (*originalArr)[SIZE] = getArray();

    // Print the original array
    std::cout << "Original Array:" << std::endl;
    printArray(originalArr);

    // Call invertSymmetrically to invert the original array
    int (*invertedArr)[SIZE] = invertSymmetrically(originalArr);

    // Print the inverted array
    std::cout << "\nInverted Array:" << std::endl;
    printArray(invertedArr);

    return 0;
}