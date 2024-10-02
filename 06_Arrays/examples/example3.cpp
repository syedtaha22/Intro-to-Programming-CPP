/*
    Example 3:
        This example demonstrates iterating through a one-dimensional array
        to display the weekly temperatures.
*/

// Include the iostream library
#include <iostream>

// Main function
int main() {
    // Array of temperatures for a week
    int temperatures[7] = { 30, 32, 31, 29, 28, 35, 33 };

    // Iterating through the array
    std::cout << "Weekly Temperatures:" << std::endl;
    for (int i = 0; i < 7; i++) {
        // Displaying the temperature for each day
        std::cout << "Day " << i + 1 << ": " << temperatures[i] << '\370' << "C" << std::endl;
    }

    // return 0 to indicate that the program has run successfully
    return 0;
}
