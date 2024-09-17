/*
    Task 4:
    Write a C++ program that takes a number N from the user and prints the following
    pattern upto N rows, without using nested loops:

    ```
    *
    * *
    * * *
    * * * *
    * * * * *
    ```
*/

// Include the iostream library
#include <iostream>
// Include the string library

// main function
int main() {
    // Declare a variable to store the user's input
    int N;
    // Declare a variable to store the pattern
    std::string pattern = "*";

    // Display a message to the user
    std::cout << "Enter a number N: ";
    // Store the user's input
    std::cin >> N;

    // Use a for loop to iterate through numbers from 1 to N
    for (int i = 1; i <= N; i++) {
        // Print the pattern
        std::cout << pattern << std::endl;
        // Update the pattern
        pattern += " *";
    }

    // return 0 to indicate the program executed successfully
    return 0;
}