/********************************************************************
 * @file    task1.cpp
 *
 * @details Write a C++ program that checks whether a number is
 *          prime or not. Use a for loop to check divisibility
 *          for numbers less than the input value.
 ********************************************************************/

#include <iostream>

int main() {
    int n;

    // Get user input
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    // Validate input
    if (n <= 1) {
        std::cout << n << " is not a prime number." << std::endl;
        return 0;
    }

    // Check for primality
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            std::cout << n << " is not a prime number." << std::endl;
            return 0;
        }
    }

    // If no divisor was found
    std::cout << n << " is a prime number." << std::endl;
    return 0;
}
