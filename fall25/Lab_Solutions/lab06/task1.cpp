/*********************************************************************************
 * @file    task1.cpp
 *
 * @brief   Matrices can also be used to generate patterns. Each element of a
 *          matrix can serve as input to create a visual design. In this problem,
 *          every value in a row corresponds to a number of stars to be printed,
 *          with indentation increasing for each subsequent element in the row.
 *
 * @details Your task is to read a 4x4 matrix of integers from the user. For each
 *          row of the matrix, print a set of star patterns, where the number of
 *          stars in each pattern corresponds to the integer value in that row.
 *          Each subsequent element in the row should be indented further to the
 *          right before printing its stars. After printing one row’s patterns,
 *          continue with the next row.
 *
 * @note    You must use a static array.
 *
 *********************************************************************************/

#include <iostream>

int main() {
    constexpr int SIZE = 4;
    int arr[SIZE][SIZE];

    std::cout << "Enter a 4x4 matrix:" << std::endl;
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            std::cin >> arr[i][j];

    std::cout << "\nOutput:" << std::endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int s = 0; s < j; s++) std::cout << ' ';          // Indentation
            for (int k = 0; k < arr[i][j]; k++) std::cout << '*';  // Print stars
            std::cout << std::endl;
        }
    }

    return 0; // Indicate successful completion
}