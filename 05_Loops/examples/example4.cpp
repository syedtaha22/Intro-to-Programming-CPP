/***********************************************************
 *  Example 4
 *    Loop to calculate the sum of numbers entered by the user,
 *    until the user enters 0.
 ***********************************************************/

 // Include the iostream library
#include <iostream>

// Main function
int main() {
    // Variable to store the number, and the sum
    int num, sum = 0;

    // Loop to read numbers from the user and calculate the sum
    do {
        std::cout << "Enter a number (0 to stop): ";
        std::cin >> num;
        sum += num;
    } while (num != 0); // Loop until the user enters 0

    // Print the sum
    std::cout << "Total sum: " << sum << std::endl;

    // Return 0 to indicate that the program has run successfully
    return 0;
}