/*
    Lab Task 5: Prime Number Grid
        Write a program to generate a grid filled with prime numbers, based on a user-defined size.
            •	The user will input `n`, which determines the size of the grid (`n x n`).
            •	The Program will Loop over each cell(i, j) in the grid. If the Corresponding number
                is a prime number, print 1; otherwise, print 0.
                    Think about how to get the number at position(i, j) in the grid.

        Handle the case where n is less than 1 and display an error message.

        Example Output (for n=3):
        ```
        0 1 1
        0 1 0
        1 0 1
        ```

        Explanation:
            -   The grid is 3x3, so the numbers range from 1 to 9.
            -   The Grid Looks like:
                ```
                1 2 3
                4 5 6
                7 8 9
                ```
            - Now for Each Cell (i, j) we check if is is prime, and print 1 if it is, 0 otherwise.
                ```
                0 1 1
                0 1 0
                1 0 1
                ```

        Example Output (for n=-1):
        ```
        Please enter a positive number.
        ```

        Explanation:
            -   The input is less than 1, so the program displays an error message.
            -   Return an error code of -1.


*/

// Include the iostream library
#include <iostream>

// main function
int main() {
    // Declare a variable to store the size of the grid
    int n;

    // Prompt the user for input
    std::cout << "Enter the size of the grid: ";
    // Store the user's input
    std::cin >> n;

    // Check if n is valid
    if (n < 1) {
        std::cout << "Please enter a positive number." << std::endl;
        return -1; // Return an error code
    }

    // Loop over each cell in the grid
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Calculate the number at position (i, j)
            int number = (i - 1) * n + j;
            // Check if the number is prime also handle the case for 1
            bool is_prime = number > 1;
            for (int k = 2; k < number; k++) {
                if (number % k == 0) {
                    is_prime = false;
                    break;
                }
            }

            // Print 1 if the number is prime, 0 otherwise
            std::cout << is_prime << " ";
        }
        // Move to the next line after each row
        std::cout << std::endl;
    }

    // return 0 to indicate the program executed successfully
    return 0;
}