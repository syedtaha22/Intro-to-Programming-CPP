/******************************************************************************
 * @file    task3.cpp
 *
 * @brief   Sudoku is a popular logic-based number puzzle. A standard
 *          Sudoku grid consists of 9 rows and 9 columns, and the rules
 *          require that each row, column, and 3×3 subgrid contain all
 *          digits from 1 to 9 exactly once. Ensuring that no number
 *          repeats within a row is one of the fundamental checks in
 *          validating a Sudoku solution. This task focuses on validating
 *          a single row.
 *
 * @details Write a C++ program that takes 9 integers (each between 1 and 9)
 *          as input and checks whether they form a valid Sudoku row. A valid
 *          row must satisfy the following conditions:
 *            1. Each number must be between 1 and 9.
 *            2. No number should appear more than once.
 *          Use a for loop to read the numbers and validate the row as they
 *          are entered.
 *
 *****************************************************************************/
#include <iostream>

int main() {
    int nums = 0;

    for (int i = 0; i < 9; i++) {
        int n;
        std::cout << "Enter number " << (i + 1) << ": ";
        std::cin >> n;

        if (n < 1 || n > 9) {
            std::cout << "Invalid input. Numbers must be between 1 and 9." << std::endl;
            return 1;
        }

        int mask = 1 << (n - 1);
        if (nums & mask) {
            std::cout << "Invalid row. Number " << n << " is repeated." << std::endl;
            return 1;
        }

        nums |= mask;
    }

    std::cout << "Valid Sudoku row." << std::endl;

    return 0;
}