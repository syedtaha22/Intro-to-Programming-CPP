/*
    Program to check if a person is eligible to vote.
*/

// include the iostream library
#include <iostream>

// main function
int main() {
    // declare a variable to store the age
    int age;
    // ask the user to enter their age
    std::cout << "Enter your age: ";
    // read the age from the user
    std::cin >> age;

    // check if the person is eligible to vote and store the result in a string
    std::string eligibility = (age >= 18) ? "You are eligible to vote." : "You are not eligible to vote.";
    // print the eligibility
    std::cout << eligibility << std::endl;

    // return 0 to indicate that the program has run successfully
    return 0;
}