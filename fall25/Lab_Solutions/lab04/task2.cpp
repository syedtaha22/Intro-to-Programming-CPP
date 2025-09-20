/*************************************************************************
 * @file    task2.cpp
 *
 * @brief   The Collatz Conjecture, also known as the 3n + 1 problem,
 *          is a famous unsolved problem in mathematics. It proposes
 *          that for any positive integer n, the following process
 *          will always eventually reach 1:
 *               - If n is even, divide it by 2.
 *               - If n is odd, multiply it by 3 and add 1.
 *          The conjecture is simple to state but has never been
 *          proven for all positive integers.
 *
 * @details Write a program that implements the Collatz Conjecture
 *          sequence. The program should:
 *              1. Take a positive integer n from the user.
 *              2. Use a while loop to repeatedly apply the rules above.
 *              3. Print each value in the sequence until it reaches 1.
 *
 ************************************************************************/

#include <iostream>

int main() {
    int n;

    // Get user input
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    // Validate input
    if (n <= 0) {
        std::cout << "Error: Please enter a positive integer." << std::endl;
        return 1;
    }

    // Print the Collatz sequence
    std::cout << "Collatz sequence:\n" << n << "\n";
    while (n != 1) {
        if (n % 2 == 0) n = n / 2;
        else n = 3 * n + 1;
        std::cout << n << "\n";
    }
    std::cout << std::endl;

    return 0;
}