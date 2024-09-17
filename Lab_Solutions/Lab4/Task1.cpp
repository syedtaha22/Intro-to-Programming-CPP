/*
    Task 1:
        Write a C++ program that uses a `for` loop to print all numbers between  1 and 50 that are divisible by 3
*/

// Include the iostream library
#include <iostream>

// main function
int main() {
    // Use a for loop to iterate through numbers from 1 to 50
    for (int i = 1; i <= 50; i++) {
        // Check if the number is divisible by 3
        if (i % 3 == 0) {
            // Print the number if it is divisible by 3
            std::cout << i << " ";
        }
    }

    // Print a new line after printing all numbers
    std::cout << std::endl;

    // return 0 to indicate the program executed successfully
    return 0;
}