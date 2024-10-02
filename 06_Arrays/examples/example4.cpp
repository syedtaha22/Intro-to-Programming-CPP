/*
    Example 4:
        This example demonstrates declaring and initializing a two-dimensional array,
        and accessing its elements.
*/

// Include the iostream library
#include <iostream>

// Main function
int main() {
    // Declare and initialize a two-dimensional array
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Accessing elements
    std::cout << "Element at (0, 1): " << matrix[0][1] << std::endl;  // Output: 2
    std::cout << "Element at (1, 2): " << matrix[1][2] << std::endl;  // Output: 6

    // return 0 to indicate that the program has run successfully
    return 0;
}
