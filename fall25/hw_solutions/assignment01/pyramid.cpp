/****************************************************************************
 * @file pyramid.cpp
 *
 * @brief Write a program that prints a pyramid pattern for a given number n.
 *        For example,vif n = 4, the output should look like:
 *                    1
 *                  1 2 1
 *                1 2 3 2 1
 *              1 2 3 4 3 2 1
 *
 *        Hint:Use nested loops. One for the rows and two inner loops for
 *        increasing and decreasing numbers.
 ***************************************************************************/

#include <iostream>

int main() {
    int n;
    std::cout << "Enter n: ";

    // Verify input
    if (!(std::cin >> n)) {
        std::cout << "Invalid Input!\n";
        return 1; // Exit with an error
    }

    for (int i = 1; i <= n; i++) {
        // spaces for centering
        for (int s = 0; s < n - i; s++) std::cout << "  "; // two spaces

        // increasing part
        for (int j = 1; j <= i; j++) std::cout << j << " ";

        // decreasing part
        for (int j = i - 1; j >= 1; j--) std::cout << j << " ";

        std::cout << std::endl;
    }

    return 0;
}
