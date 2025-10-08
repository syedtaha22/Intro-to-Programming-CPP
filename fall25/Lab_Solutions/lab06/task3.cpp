/*********************************************************************************
 * @file    task3.cpp
 *
 * @brief   Matrix multiplication is one of the most important operations in computing,
 *          with applications ranging from computer graphics to scientific simulations.
 *          Understanding how to implement it with two-dimensional arrays helps build a
 *          foundation for more advanced numerical algorithms.
 *
 * @details Your task is to read two 5 × 5 matrices of integers from the user. Multiply
 *          these two matrices to produce a resulting 5 × 5 matrix. Recall that each
 *          element of the result is calculated as the dot product of a row of the first
 *          matrix and a column of the second matrix, according to the formula:
 *              Cij = sum(Aik * Bkj) for k = 1 to 5
 *          After performing the multiplication, print the resulting matrix in a properly
 *          formatted 5 × 5 layout, where each row of the output is displayed on a separate
 *          line.
 *********************************************************************************/

#include <iostream>
#include <iomanip>  // for std::setw

#define SIZE 5

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE] = { 0 };

    std::cout << "Enter the first 5x5 matrix (A):" << std::endl;
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            std::cin >> A[i][j];

    std::cout << "\nEnter the second 5x5 matrix (B):" << std::endl;
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            std::cin >> B[i][j];

    // Matrix multiplication
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            C[i][j] = 0; // Initialize the element
            for (int k = 0; k < SIZE; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the resulting matrix
    std::cout << "\nResulting matrix (C = A * B):" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << C[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

