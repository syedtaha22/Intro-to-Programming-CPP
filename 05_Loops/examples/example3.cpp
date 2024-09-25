/******************************************************
 *  Example 3:
 *      Loop to calculate the factorial of a number.
*******************************************************/

// Include the iostream library
#include <iostream>

// Main function
int main() {
    // Variable to store the number
    int n, factorial = 1;

    // Ask the user to enter a number
    std::cout << "Enter a number: ";
    // Read the number
    std::cin >> n;

    // Initiliaze the loop counter
    int i = 1;
    // Loop through numbers from 1 to n
    while (i <= n) {
        // Multiply the number with the factorial
        factorial *= i;
        // Increment the loop counter
        i++;
    }

    // Print the factorial
    std::cout << "Factorial of " << n << " is: " << factorial << std::endl;
    // Return 0 to indicate that the program has run successfully
    return 0;
}
