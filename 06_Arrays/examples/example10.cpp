/*
    Example 10:
        This example demonstrates calculating the transpose of a two-dimensional
        array and displaying the transposed values.
*/
#include <iostream>

int main() {
    int original[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int transpose[3][2];

    // Calculating the transpose of a 2D array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = original[i][j];
        }
    }

    // Displaying the original array
    std::cout << "Original Array:" << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << original[i][j] << " ";
        }
        std::cout << std::endl;  // New line for the next row
    }

    // Displaying the transposed array
    std::cout << "Transposed Array:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << transpose[i][j] << " ";
        }
        std::cout << std::endl;  // New line for the next row
    }

    // return 0 to indicate that the program has run successfully
    return 0;
}
