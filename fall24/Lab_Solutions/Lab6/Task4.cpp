/***************************************************
 * Task 4: Print a String Inside a Box
 *
 * Write a C++ program that takes a string as input and prints it inside a box. The
 * box should have a border of `+` and `-` characters, framing the input string neatly.
 *
 * Example Output:
 * Enter a string: Hello World
 * +-------------+
 * | Hello World |
 * +-------------+
 *
 * Note:
 * - Ensure the box adjusts to the length of the input string by calculating the necessary
 *   width based on the string length.
 * - Use `+` for the corners and ends of the box, `-` for the horizontal borders, and `|`
 *   for the vertical borders.
****************************************************/

// Include the iostream library
#include <iostream>
// Include the string library
#include <string>

// Main function
int main() {
    // Declare a string variable to store the input
    std::string input;
    // Prompt the user to enter a string
    std::cout << "Enter a string: ";
    // Read the input string
    std::getline(std::cin, input);

    // Calculate the width of the box based on the length of the input string
    int width = input.length() + 4;

    // Print the top border of the box
    std::cout << "+";
    for (int i = 0; i < width - 2; i++) {
        std::cout << "-";
    }
    std::cout << "+" << std::endl;

    // Print the input string inside the box
    std::cout << "| " << input << " |\n";

    // Print the bottom border of the box
    std::cout << "+";
    for (int i = 0; i < width - 2; i++) {
        std::cout << "-";
    }
    std::cout << "+" << std::endl;

    // Return 0 to indicate successful completion
    return 0;
}