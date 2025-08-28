/*
    Task 3:
        Write a C++ program that repeatedly asks the user to enter numbers until they enter -1.
        The program should then display the total count of positive numbers entered (excluding `-1`).

        Use `for` loops


*/

// Include the iostream library
#include <iostream>

// main function
int main() {
    // Declare a variable to store the user's input
    int number;
    // Declare a variable to store the count of positive numbers
    int count = 0;

    // Use a for loop to repeatedly ask the user to enter numbers until they enter -1
    for (;number != -1;) {
        // Display a message to the user
        std::cout << "Enter a number (-1 to exit): ";
        // Store the user's input
        std::cin >> number;

        // Check if the number is positive
        if (number >= 0) {
            // Increment the count of positive numbers
            count++;
        }
    }

    // Display the total count of positive numbers entered
    std::cout << "The total count of positive numbers entered is: " << count << std::endl;

    // return 0 to indicate the program executed successfully
    return 0;
}