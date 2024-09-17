/*
    [Question 4]
    Write a program that prints a list of students and their scores in a tabular format using `\t`.
    Ensure that the columns are properly aligned even with different name lengths.

    Name       Score
    Ali         85
    Bilal       90
    Rayyan      88
*/

// Preprocessor Directives
#include <iostream>

// Main Function
int main() {
    // Add two new lines for spacing
    std::cout << "\n\n";

    // Print the formatted table
    std::cout << "Name\t\tScore\nAli\t\t85\nBilal\t\t90\nRayyan\t\t88";

    // Add two new lines for spacing
    std::cout << "\n\n";

    // Return 0 to indicate successful completion
    return 0;
}