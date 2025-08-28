/*
    Task 5:
        Create a function `factorial` that returns the factorial of a given
        number `n'. Ask the user to input a positive integer and display the
        factorial value returned by the function.
*/

// Include the iostream library
#include <iostream>

// Function to calculate the factorial of a number
int factorial(int n) {
    // Initialize the result to 1
    int result = 1;

    // Calculate the factorial of the number
    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

// Main function
int main() {
    // Declare a variable to store the user input
    int number;

    // Prompt the user to enter a positive integer
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    // Check if the number is positive
    if (number < 0) {
        std::cout << "Error: Please enter a positive integer." << std::endl;
    }
    else {
        // Calculate and display the factorial of the number
        std::cout << "Factorial of " << number << " is: " << factorial(number) << std::endl;
    }

    // Return 0 to indicate successful completion
    return 0;
}