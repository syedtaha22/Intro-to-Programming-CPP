/****************************************************************************************
 * @file    task3.cpp
 *
 * @details Create a function printFibonacci that prints the first n terms of the Fibonacci
 *          sequence, starting from 0 and 1. Prompt the user to enter the number of terms
 *          to display and print the series.
 *
 * @note    The Fibonacci sequence is:
 *          0, 1, 1, 2, 3, 5, 8, 13, 21, ...
 *          or equivalently,
 *          F0 = 0, F1 = 1, Fn = Fn−1 + Fn−2 for n ≥ 2
 ****************************************************************************************/

#include <iostream>

 /**
  * @brief Print the first n terms of the Fibonacci sequence.
  *
  * @param n Number of terms to print
  */
void printFibonacci(int n) {
    if (n <= 0) return; // No terms to print

    int fib[2] = { 0, 1 }; // Initialize first two Fibonacci numbers
    if (n >= 1) std::cout << fib[0] << " "; // Print F0
    if (n >= 2) std::cout << fib[1] << " "; // Print F1
    for (int i = 2; i < n; ++i) {
        int nextFib = fib[0] + fib[1]; // Calculate next Fibonacci number
        std::cout << nextFib << " ";   // Print next Fibonacci number
        fib[0] = fib[1];                // Update F(n-2)
        fib[1] = nextFib;               // Update F(n-1)
    }
    std::cout << std::endl; // New line after printing the sequence
}

int main() {
    int n;

    // Prompt user for number of terms
    std::cout << "Enter the number of terms in the Fibonacci sequence to display: ";
    std::cin >> n;

    // Print the Fibonacci sequence
    printFibonacci(n);

    return 0;
}