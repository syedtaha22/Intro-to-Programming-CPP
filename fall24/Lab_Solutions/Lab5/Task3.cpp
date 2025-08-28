/*
    Lab Task 5: Multiplication Table
        Write a program that can generate a multiplication table based on a user-defined number.
            •	The program will prompt the user to enter a positive integer `n`.
            •	Using nested loops, the program will generate and print a multiplication table from 1 to `n`.
            •	The output should be formatted as a table, with headers for the columns and rows clearly
                separated by a line(----) and vertical bars (|)

        Example Input/Output:
        ```
        Enter a number for multiplication table: 5

        Multiplication Table for 5:
          |  1  2  3  4  5
        --|-----------------
        1 |  1  2  3  4  5
        2 |  2  4  6  8 10
        3 |  3  6  9 12 15
        4 |  4  8 12 16 20
        5 |  5 10 15 20 25
        ```

        Use setw() to format the output.
        Suppose n < 100
*/

#include <iostream>
#include <iomanip>

int main() {
    int n;

    // Prompt the user for input
    std::cout << "Enter a number for multiplication table: ";
    // Store the user's input
    std::cin >> n;

    // Check if n is valid
    if (n < 1 || n > 10) {
        std::cout << "Please enter a number between 1 and 10." << std::endl;
        return -1; // Return an error code
    }

    // Add spacing for formatting
    std::cout << "\n\n";

    // Print the header
    std::cout << "     |";
    for (int i = 1; i <= n; i++) {
        std::cout << std::setw(4) << i; // Adjust width for formatting
    }
    std::cout << std::endl;

    // Print the separator
    std::cout << "-----|";
    for (int i = 1; i <= n; i++) {
        std::cout << "----"; // Separator for columns
    }
    std::cout << std::endl;

    // Print the multiplication table
    for (int i = 1; i <= n; i++) {
        // Print the row label
        std::cout << std::setw(4) << i << " |";
        // Print the multiplication values
        for (int j = 1; j <= n; j++) {
            std::cout << std::setw(4) << i * j; // Multiply and format output
        }
        // Move to the next line
        std::cout << std::endl;
    }
    // Return 0 to indicate successful execution
    return 0;
}
