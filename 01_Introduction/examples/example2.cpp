// example2.cpp
// This program demonstrates the effect of not using std::endl when printing.

#include <iostream> // Include the iostream library for input/output operations

int main() {
    std::cout << "Welcome to C++ Programming! "; // Print a message without std::endl
    std::cout << "This is still on the same line."; // This message appears on the same line as the previous one
    std::cout << " Now, let's start a new line." << std::endl; // Move to a new line after printing
    std::cout << "This text is on a new line." << std::endl; // This message starts on a new line
    return 0; // Indicate that the program ended successfully
}
