/***************************************************************************************
 * @file    task2.cpp
 *
 * @details Write a C++ program that prompts the user to enter a positive integer n.
 *          The program should then generate and display an n x n multiplication table.
 *
 **************************************************************************************/

#include<iostream>
#include<cmath>
#include<iomanip> // For std::setw

 /***************************************************************************************
   * @name std::setw
   *
   * @brief Sets the width of the next input/output field.
   *
   * @details This manipulator is used to specify the minimum number of characters
   *          to be used for the next input/output operation. If the data to be printed
   *          is shorter than the specified width, it will be padded with spaces (by default)
   *          to fill the width. If the data is longer, it will be printed in full, exceeding
   *          the specified width.
   **************************************************************************************/

int main() {
    int n;
    std::cout << "Enter the size of the multiplication table (n): ";
    std::cin >> n;

    // Print the header row
    std::cout << "    |";
    for (int i = 1; i <= n; ++i)
        std::cout << std::setw(4) << i;

    std::cout << "\n----+" << std::string(n * 4, '-') << "\n";

    // Print the table rows
    for (int i = 1; i <= n; ++i) {
        std::cout << std::setw(3) << i << " |";

        for (int j = 1; j <= n; ++j)
            std::cout << std::setw(4) << i * j;

        std::cout << "\n";
    }

    return 0;
}