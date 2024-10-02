/*
    Example 7:
        This example demonstrates declaring and initializing a two-dimensional
        array with different column sizes and displaying the values.
*/

// Include the iostream library
#include <iostream>

// Main function
int main() {
    // Declare and initialize a 2D array with different column sizes
    int grid[3][4] = {
        {1, 2, 3, 0},
        {4, 5, 0, 0},
        {6, 0, 0, 0}
    };

    // Displaying the 2D array
    std::cout << "Grid:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;  // New line for the next row
    }

    return 0;
}
