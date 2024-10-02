/*
    Example 8:
        This example demonstrates declaring and initializing a three-dimensional
        array and accessing its elements.
*/

// Include the iostream library
#include <iostream>

// Main function
int main() {
    // Declare and initialize a three-dimensional array
    int cube[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };

    // Accessing an element in a 3D array
    std::cout << "Element at (1, 0, 1): " << cube[1][0][1] << std::endl;  // Output: 6

    // return 0 to indicate that the program has run successfully
    return 0;
}
