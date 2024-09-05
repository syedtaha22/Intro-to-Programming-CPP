/*
    Program to check if a number is even or odd.
*/

// include the iostream library
#include <iostream>

// main function
int main() {
    // declare a variable to store the number
    int number;

    // ask the user to enter a number
    std::cout << "Enter a number: ";

    // read the number from the user
    std::cin >> number;

    // check if the number is even or odd
    if (number % 2 == 0) {
        // if the number is even, print that the number is even
        std::cout << number << " is even." << std::endl;
    }
    else {
        // otherwise, print that the number is odd
        std::cout << number << " is odd." << std::endl;
    }

    // return 0 to indicate that the program has run successfully
    return 0;
}
