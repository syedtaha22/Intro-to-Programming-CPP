/*
    Task 3:
        Write a function `isEven` that checks if a number is even. This function
        should take a single integer input and return `true` if the number is even
        or `false` if it is not. Prompt the user for a number, pass it to the function,
        and print the result based on the function's return value.
*/

// Include the iostream library
#include <iostream>

// Function to check if a number is even
bool isEven(int number) {
    // Check if the number is divisible by 2
    if (number % 2 == 0) {
        return true; // Return true if the number is even
    }
    else {
        return false; // Return false if the number is odd
    }
}

int main() {
    // Declare a variable to store the user input
    int number;

    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check if the number is even and display the result
    if (isEven(number)) {
        std::cout << number << " is even." << std::endl;
    }
    else {
        std::cout << number << " is odd." << std::endl;
    }

    // Return 0 to indicate successful completion
    return 0;
}