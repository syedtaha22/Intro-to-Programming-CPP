/***************************************************
 * Task 3: Zigzag Sum of an Array
 *
 * Create a program that takes 10 integers into an array. Then, calculate the sum of
 * alternate elements (i.e., sum of elements at index 0, 2, 4, etc., and sum of elements
 * at index 1, 3, 5, etc.). Print both sums.
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

    // Initialize variables to store the sums of alternate elements
    int sum1 = 0;
    int sum2 = 0;

    // Calculate the sum of alternate elements
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            sum1 += numbers[i];
        }
        else {
            sum2 += numbers[i];
        }
    }

    // Display the sums of alternate elements
    std::cout << "Sum of elements at even indices: " << sum1 << std::endl;
    std::cout << "Sum of elements at odd indices: " << sum2 << std::endl;

    // Return 0 to indicate successful completion
    return 0;
}