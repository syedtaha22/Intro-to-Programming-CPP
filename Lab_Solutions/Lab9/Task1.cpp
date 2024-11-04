/*
    Task 1:
        Write a function `printArray` that takes an array of integers and its size as parameters
        and prints each element. In the main function, initialize an array of integers and call
        `printArray` to display its elements.
*/

// Include the iostream library
#include <iostream>

// Function to print the elements of an array
void printArray(const int arr[], const int size) {
    // Loop through the array and print each element
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Main function
int main() {
    // Initialize an array of integers
    int arr[] = { 1, 2, 3, 4, 5 };

    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call the printArray function to display the elements of the array
    std::cout << "Array elements: ";
    printArray(arr, size);

    // Return 0 to indicate successful completion
    return 0;
}