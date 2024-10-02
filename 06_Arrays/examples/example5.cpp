/*
    Example 5:
        This example shows how to modify an element in a two-dimensional array
        and display the updated values.
*/

// Include the iostream library
#include <iostream>

// Main function
int main() {
    // Declare and initialize a two-dimensional array
    int grid[2][2] = {
        {10, 20},
        {30, 40}
    };

    // Modifying an element
    grid[1][0] = 25;  // Change element at row 1, column 0

    // Displaying updated array
    std::cout << "Updated Grid:" << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;  // New line for the next row
    }

    return 0;
}
