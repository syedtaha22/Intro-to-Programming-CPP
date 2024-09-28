/***************************************************
 * Task 1: Prime Number Grid
 *
 * Write a C++ program that initializes an array of size 100,
 * where each index represents a number from 1 to 100. The program
 * should mark each cell as 1 (true) if the corresponding number
 * is prime, and 0 (false) if it is not.
 *
 * After processing the prime numbers, print the array as a 10x10 grid,
 * where the numbers are arranged column-wise.
****************************************************/

// Include the iostream library
#include <iostream>

// Main function
int main() {
    // Declare an array to store the prime numbers
    bool primes[100] = { 0 };

    // Mark the prime numbers in the array
    for (int i = 2; i <= 100; i++) {
        // Assume the number is prime
        bool isPrime = true;

        // Check if the number is divisible by any number other than 1 and itself
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        // Mark the number as prime or non-prime in the array
        primes[i - 1] = isPrime;
    }

    // Print the array as a 10x10 grid (column-wise)
    for (int i = 0; i < 10; i++) {
        for (int j = i; j < 100; j += 10) {
            std::cout << primes[j] << " ";
        }
        std::cout << std::endl;
    }

    // Return 0 to indicate successful completion
    return 0;
}