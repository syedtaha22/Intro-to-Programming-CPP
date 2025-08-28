/*
    Task 2:
        Write a function `sumArray` that takes an array of integers, its size, and a
        variable `sum` that will store the total of the array elements. In this function,
        calculate the sum of all elements in the array and update `sum` directly. In the
        main function, declare an integer `sum` variable initialized to zero, call `sumArray`,
        and then print `sum` to see the total of the array elements.
*/

// Include the iostream library
#include <iostream>

// Function to calculate the sum of elements in an array
void sumArray(const int arr[], const int size, int& sum) {
    // Initialize the sum to zero
    sum = 0;

    // Loop through the array and add each element to the sum
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
}

// Helper function to print the elements of an array
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
    const int size = sizeof(arr) / sizeof(arr[0]);

    // Display the elements of the array
    std::cout << "Array elements: ";
    printArray(arr, size);

    // Calculate the size of the array

    // Declare a variable to store the sum of the array elements
    int sum;

    // Call the sumArray function to calculate the sum of the array elements
    sumArray(arr, size, sum);

    // Display the sum of the array elements
    std::cout << "Sum of the array elements: " << sum << std::endl;

    // Return 0 to indicate successful completion
    return 0;
}