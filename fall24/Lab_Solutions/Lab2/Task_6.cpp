/*
    [Question 6]:
    Write a program that takes three int values from the user and prints them in ascending order.

    Note: Do not use if statement (we haven’t covered it in lectures yet). Use fmin() and fmax()
    from the <cmath> library.

*/

// Include the iostream library
#include <iostream>
// Include the cmath library for fmin() and fmax()
#include <cmath>

// Main function
int main() {
    // Declare variables to store the three integer values
    int num1, num2, num3;

    // Ask the user to enter three integer values
    std::cout << "Enter three integer values: ";
    std::cin >> num1 >> num2 >> num3; // Store the user input in the variables num1, num2, and num3

    // Find the minimum and maximum of the three numbers
    int min = fmin(num1, fmin(num2, num3));
    int max = fmax(num1, fmax(num2, num3));
    int mid = num1 + num2 + num3 - min - max;

    // Display the numbers in ascending order
    std::cout << "Numbers in ascending order: " << min << ", " << mid << ", " << max << std::endl;

    return 0; // Return 0 to indicate successful completion
}
