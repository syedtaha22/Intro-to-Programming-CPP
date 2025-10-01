/************************************************************************************
 * @file perfect.cpp
 *
 * @brief   Write a program that checks if a given number is a perfect number.
 *
 * @details A perfect number is a number that equals the sum of its proper divisors
 *          (excluding itself). For example, 6 is a perfect number because its proper
 *          divisors are 1, 2, and 3, and 1 + 2 + 3 = 6.
 *
 *          To find the proper divisors of a number n, iterate through all integers
 *          from 1 to n/2 and check if they divide n evenly (n % i == 0). If they do,
 *          add them to a sum. After checking all possible divisors, compare the sum
 *          to n to determine if it is a perfect number.
 *************************************************************************************/

#include <iostream>

int main() {
    int n;
    std::cout << "Enter a positive integer: ";

    if (!(std::cin >> n)) {
        std::cout << "Error: invalid input.\n";
        return 1;
    }

    if (n <= 0) {
        std::cout << "Error: number must be positive.\n";
        return 1;
    }

    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) sum += i;
    }

    if (sum == n) {
        std::cout << n << " is a perfect number." << std::endl;
    }
    else {
        std::cout << n << " is not a perfect number." << std::endl;
    }

    return 0;
}
