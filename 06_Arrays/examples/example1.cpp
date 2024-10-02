/*
    Example 1:
        This example demonstrates declaring and initializing a one-dimensional array,
        followed by accessing its elements.
*/

// Include the iostream library
#include <iostream>

// Main function
int main() {
    // Declare and initialize a one-dimensional array
    int numbers[5] = { 10, 20, 30, 40, 50 };

    // Accessing elements
    std::cout << "First number: " << numbers[0] << std::endl;  // Output: 10
    std::cout << "Third number: " << numbers[2] << std::endl;  // Output: 30

    // return 0 to indicate that the program has run successfully
    return 0;
}
