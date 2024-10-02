/*
    Example 6:
        This example demonstrates iterating through a two-dimensional array
        to display a table of values.
*/

// Include the iostream library
#include <iostream>

// Main function
int main() {
    // Declare and initialize a two-dimensional array
    int table[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Iterating through the 2D array
    std::cout << "2D Table:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << table[i][j] << " ";
        }
        std::cout << std::endl;  // New line for the next row
    }

    return 0;
}
