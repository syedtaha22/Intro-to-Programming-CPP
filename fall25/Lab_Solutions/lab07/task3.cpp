/*********************************************************************************
 * @file    task3.cpp
 *
 * @brief   Matrix multiplication is a fundamental operation in computing,
 *          with applications in computer graphics, data analysis, and
 *          scientific simulations. In this task, you will implement it
 *          using one-dimensional arrays (or std::vector) instead of
 *          two-dimensional ones. This will help you understand how
 *          multidimensional data can be represented and accessed in linear
 *          memory.
 *
 * @details Your program should read two matrices of integers from the user:
 *            - The first matrix A of size N x K
 *            - The second matrix B of size K x M
 *          Store both matrices as one-dimensional arrays (std::vector<int>).
 *          Then multiply them to produce a resulting matrix C of size N x M,
 *          also represented as a 1D array.
 *
 *          Each element of the result is computed as the dot product of a row
 *          from A and a column from B.
 *
 *          Since the matrices are stored in one-dimensional arrays, use index
 *          mapping to access elements:
 *            A[i][j] -> A[i * K + j]
 *            B[i][j] -> B[i * M + j]
 *            C[i][j] -> C[i * M + j]
 *
 *          After computing the result, print the resulting matrix in a formatted
 *          N x M layout, where each row is displayed on a separate line.
 *
 **********************************************************************************/

#include <iostream>
#include <vector>

int main() {
    int N, K, M;

    // Read dimensions
    std::cout << "Enter dimensions N, K, M: ";
    std::cin >> N >> K >> M;

    // Initialize matrices as 1D arrays
    std::vector<int> A(N * K);
    std::vector<int> B(K * M);
    std::vector<int> C(N * M, 0); // Result matrix initialized to 0

    // Read matrix A
    std::cout << "\nEnter matrix A (" << N << "x" << K << "):\n";
    for (int index = 0; index < N * K; ++index) std::cin >> A[index];

    // Read matrix B
    std::cout << "\nEnter matrix B (" << K << "x" << M << "):\n";
    for (int index = 0; index < K * M; ++index) std::cin >> B[index];

    // Perform matrix multiplication C = A * B
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            for (int k = 0; k < K; ++k) {
                C[i * M + j] += A[i * K + k] * B[k * M + j];
            }
        }
    }

    // Print result matrix C
    std::cout << "\nResulting matrix C (" << N << "x" << M << "):\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cout << C[i * M + j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}