/*
    Task 2:
        Write a C++ program that uses a `for` loop to calculate and display the sum of all even numbers between 1 and a positive integer N entered by the user.
*/

// Include the iostream library
#include <iostream>

// main function
int main() {
    // Declare a variable to store the user's input
    int N;
    // Declare a variable to store the sum of even numbers
    int sum = 0;

    // Display a message to the user
    std::cout << "Enter a positive integer N: ";
    // Store the user's input
    std::cin >> N;

    // Use a for loop to iterate through numbers from 1 to N
    for (int i = 1; i <= N; i++) {
        // Check if the number is even
        if (i % 2 == 0) {
            // Add the even number to the sum
            sum += i;
        }
    }

    // Display the sum of all even numbers between 1 and N
    std::cout << "The sum of all even numbers between 1 and " << N << " is: " << sum << std::endl;

    // return 0 to indicate the program executed successfully
    return 0;
}