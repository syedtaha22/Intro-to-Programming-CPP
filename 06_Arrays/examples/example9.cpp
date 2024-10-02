/*
    Example 9:
        This example demonstrates how to add two two-dimensional arrays
        and display the result.
*/

// Include the iostream library
#include <iostream>

// Main function
int main() {
    int matrixA[2][2] = {
        {1, 2},
        {3, 4}
    };
    int matrixB[2][2] = {
        {5, 6},
        {7, 8}
    };
    int sum[2][2];

    // Adding two 2D arrays
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    // Displaying the sum
    std::cout << "Sum of Matrix A and Matrix B:" << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << sum[i][j] << " ";
        }
        std::cout << std::endl;  // New line for the next row
    }

    // return 0 to indicate that the program has run successfully
    return 0;
}
