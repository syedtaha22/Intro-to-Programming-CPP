/**********************************************************************
 * @file    task1.cpp
 *
 * @details Write a program that takes two integer inputs from the user
 *          and swaps their values without using a third variable.
 *          Display the swapped values.
 **********************************************************************/

#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    // Swapping without a third variable
    a = a + b; // Step 1: Sum of both numbers is stored in 'a'
    b = a - b; // Step 2: Original value of 'a' is now in 'b'
    a = a - b; // Step 3: Original value of 'b' is now in 'a'

    std::cout << "After swapping: " << std::endl;
    std::cout << "First integer: " << a << std::endl;
    std::cout << "Second integer: " << b << std::endl;

    return 0;
}

