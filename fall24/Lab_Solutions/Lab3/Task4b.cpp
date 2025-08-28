/*
    [Task 5b]:
    Write a program to check whether a given integer is odd or even using bitwise operations.

    Hint: The rightmost bit of an odd number is always 1, and the rightmost bit of an even number
    is always 0. You can use the right shift operator to check this.
*/

// Include the iostream library
#include <iostream>

// main function
int main() {
    // Declare a variable to store the user's input
    int number;

    // Display a message to the user
    std::cout << "Enter an integer: ";
    // Store the user's input
    std::cin >> number;

    // Check if the number is odd or even using bit shifting
    if ((number >> 1) << 1 != number) {
        // If the rightmost bit is 1, the number is odd
        std::cout << number << " is an odd number." << std::endl;
    }
    else {
        // If the rightmost bit is 0, the number is even
        std::cout << number << " is an even number." << std::endl;
    }
    // return 0 to indicate the program executed successfully
    return 0;
}
