/*
    Task 3:
        Create a function `addConstant` that takes an array of integers, its size, and an
        integer constant `c`. The function should add `c` to each element in the array so
        that changes reflect in the original array. In the main function, initialize an array
        and call `addConstant` with an integer constant to see the changes applied to each
        element when the array is printed.
*/

// Include the iostream library
#include <iostream>

// Function to add a constant to each element of an array
void addConstant(int arr[], const int size, int c) {
    // Loop through the array and add the constant to each element
    for (int i = 0; i < size; i++) {
        arr[i] += c;
    }
}

// Function to print the elements of an array
void print(const int arr[], const int size) {
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

    // Display the original array
    std::cout << "Original array: ";
    print(arr, size);

    // Add a constant to each element of the array
    int constant = 10;
    // Print a message indicating the constant being added
    std::cout << "Adding " << constant << " to each element." << std::endl;
    addConstant(arr, size, constant);

    // Display the modified array
    std::cout << "Modified array: ";
    print(arr, size);

    // Return 0 to indicate successful completion
    return 0;
}