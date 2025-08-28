/***************************************************
 * Task 5: Rearrange Array in Ascending and Descending Order
 *
 * Write a C++ program that takes 10 integers and stores them in an array. Then, sort
 * the array in ascending order and print it. After that, sort the array in descending
 * order and print it again.
****************************************************/

// Include the iostream library
#include <iostream>

// Main function
int main() {
    // Declare an array to store 10 integers
    int numbers[10];

    // Prompt the user to enter 10 integers
    std::cout << "Enter 10 integers: ";

    // Read the 10 integers from the user
    for (int i = 0; i < 10; i++) {
        // Read the input number
        std::cin >> numbers[i];
    }

    // Sort the array in ascending order using bubble sort
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Swap the numbers
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Display the array in ascending order
    std::cout << "Array in ascending order: ";
    for (int i = 0; i < 10; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Sort the array in descending order using bubble sort
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (numbers[j] < numbers[j + 1]) {
                // Swap the numbers
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Display the array in descending order
    std::cout << "Array in descending order: ";
    for (int i = 0; i < 10; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Return 0 to indicate successful completion
    return 0;
}