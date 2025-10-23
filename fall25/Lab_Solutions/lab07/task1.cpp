/****************************************************************************************
 * @file    task1.cpp
 *
 * @details Write a program that reads a string and a number of lines from the user.
 *          The program should then print the characters of the string distributed
 *          across the specified number of lines in a round-robin pattern.
 *          Each character of the input string is placed on a line based on its
 *          position in the sequence. The first character goes to line 1, the second
 *          to line 2, and so on, wrapping around after the last line.
 *
 * @example Enter a string : Hello World
 *          Enter number of lines : 3
 *          H l W l
 *            e o o d
 *              l  r
 *
 * @note   Use nested loops and index arithmetic. Do no use any temporary storage
 *         structures such as arrays or vectors
 *
 ****************************************************************************************/

#include <iostream>
#include <string>

int main() {
    std::string input;
    int n;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::cout << "Enter number of lines: ";
    std::cin >> n;

    for (int line = 0; line < n; ++line) {
        // Starting space for formatting
        for (int s = 0; s < line; ++s) std::cout << ' ';

        for (size_t i = line; i < input.size(); i += n)
            std::cout << input[i] << ' ';
        std::cout << '\n';
    }

    return 0;
}
