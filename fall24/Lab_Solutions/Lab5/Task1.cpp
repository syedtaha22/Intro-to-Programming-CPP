/*
    Task 1:
        Write a program that generates Pascal's Triangle up to a user-specified number of rows.
        Pascal's Triangle is a triangular arrangement of numbers where the edges are always 1,
        and each number inside the triangle is the sum of the two numbers above it.
            •	The user will input the number of rows n to generate.
            •	The output should display the triangle with proper formatting and spacing so that
                it visually forms a pyramid.
            •	Each row should start and end with the number 1, and the values in between should
                be computed using the following relationship:
                    P(n, k) = P(n, k-1) * (n-k+1) / k

                    Where:
                    -	P(n, k) is the element at row n and position k.
                    -	P(n, k-1) is the previous element in the same row.
                    -	n is the row number.
                    -	k is the position within that row.

        Ensure the output looks neat and evenly spaced. Use of Proper naming will greatly help in
        understanding and applying the logic.
*/

// Include the iostream library
#include <iostream>

// main function
int main() {
    // Declare a variable to store the number of rows
    int num_rows;

    // Display a message to the user
    std::cout << "Enter the number of rows for Pascal's Triangle: ";
    // Store the user's input
    std::cin >> num_rows;

    // Iterate over each row
    for (int n = 0; n < num_rows; n++) {
        // Initialize the value of the element at the beginning of the row
        int val = 1;

        // Print the initial spacing for the row
        // Num_of_spaces = num_rows - n
        for (int i = 0; i < num_rows - n; i++) {
            std::cout << " ";
        }

        // Iterate over each element in the row
        // Number of elements is a row is n + 1
        for (int k = 0; k <= n; k++) {
            // Print the value of the element
            std::cout << val << " ";

            // Calculate the next value using the formula
            // P(n, k) = P(n, k-1) * (n-k+1) / k
            // P(n, k) = val(New)
            // P(n, k-1) = val(Prev)

            // n - k + 1 = n - k (as k starts from 0 so we need to add one to k => k + 1),
            // n - (k + 1) + 1 = n - k

            // Similarly in the denominator, k + 1 is used instead of k

            // So, the formula becomes:
            // val(New) = val(Prev) * (n - k) / (k + 1)
            val = val * (n - k) / (k + 1);
        }

        // Move to the next line for the next row
        std::cout << std::endl;
    }


    // return 0 to indicate the program executed successfully
    return 0;
}
