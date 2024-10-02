/*
    Example 2:
        This example shows how to modify an element in a one-dimensional array
        and display the updated values.
*/

// Include the iostream library
#include <iostream>

// Main function
int main() {

    // Suppose we have an array of test scores
    int scores[5] = { 90, 85, 88, 92, 95 };

    // Modifying an element
    scores[1] = 80;  // Changing the second element

    // Displaying updated array
    for (int i = 0; i < 5; i++) {
        std::cout << "Score " << i + 1 << ": " << scores[i] << std::endl;  // Output updated scores
    }

    // return 0 to indicate that the program has run successfully
    return 0;
}
