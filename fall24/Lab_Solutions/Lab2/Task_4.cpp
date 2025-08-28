/*
    [Question 4]:
    Check the voting eligibility: Initialize an integer variable age and take input for the user.
    If the user age is 18 or above print “eligible to vote” else print “not eligible’.
    Use ternary operator for this task.
*/

// Include iostream library
#include <iostream>

// Main function
int main() {
    // Declare integer variable to store user's age
    int age;

    // Ask user to enter their age
    std::cout << "Enter your age: ";
    // Store user's age in age variable
    std::cin >> age;

    // Check if the user is eligible to vote using ternary operator
    std::string message = (age >= 18) ? "eligible to vote" : "not eligible";

    // Display the message based on the user's age
    std::cout << "You are " << message << "." << std::endl;

    return 0; // Return 0 to indicate successful completion
}