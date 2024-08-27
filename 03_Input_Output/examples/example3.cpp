/*
    Program to take a date as input and print it.
*/



// Include the iostream library
#include <iostream>

int main() {
    int day, month, year; // Integers to store the day, month, and year

    // It is generally good practice to prompt the user for input
    // before taking it in. This helps the user understand what
    // the program is asking for.
    std::cout << "Enter day, month, and year: "; // Ask the user for the date
    std::cin >> day >> month >> year; // Take in the date and store it in the day, month, and year variables

    // Print the date
    // Prints: "Date: <day>/<month>/<year>"
    std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;

    return 0; // Return 0 to indicate the program ran successfully
}
