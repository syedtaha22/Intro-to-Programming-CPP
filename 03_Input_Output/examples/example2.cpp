/*
    Program to take two numbers as input and print their sum, product, difference and quotient.
*/

// Include the iosream library
#include<iostream>

// main function
int main() {
    int num1, num2; // Integers to store the two numbers

    std::cout << "Enter the first number: "; // Ask the user for the first number
    std::cin >> num1; // Take in the first number and store it in the num1 variable

    std::cout << "Enter the second number: "; // Ask the user for the second number
    std::cin >> num2; // Take in the second number and store it in the num2 variable

    std::cout << "Sum: " << num1 + num2 << std::endl; // Print the sum of the two numbers
    std::cout << "Difference: " << num1 - num2 << std::endl; // Print the difference of the two numbers
    std::cout << "Product: " << num1 * num2 << std::endl; // Print the product of the two numbers
    std::cout << "Quotient: " << num1 / num2 << std::endl; // Print the quotient of the two numbers

    // Q: What happens if you enter 0 as the second number? Think about how division works. How might you handle this?
    // Q: What happens if the result of dividing the two numbers is a decimal number?

    return 0; // Return 0 to indicate the program ran successfully
}