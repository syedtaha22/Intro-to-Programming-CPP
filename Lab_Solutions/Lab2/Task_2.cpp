/*
    [Question 2]:
    Develop a program temperature.cpp that takes the temperature in Fahrenheit as input and converts
    it to Celsius using the formula:
        Celsius = (Fahrenheit - 32) * 5 / 9.
    Output the converted temperature.
*/

// Include the iostream library
#include <iostream>

// Main function
int main() {
    // Declare variables to store the temperature in Fahrenheit and Celsius
    double fahrenheit, celsius;

    // Ask the user to enter the temperature in Fahrenheit
    std::cout << "Enter the temperature in Fahrenheit: ";
    std::cin >> fahrenheit; // Store the user input in the variable fahrenheit

    // Convert the temperature from Fahrenheit to Celsius using the formula
    celsius = (fahrenheit - 32) * 5 / 9;

    // Display the converted temperature in Celsius
    char degree = 248;  // ASCII value for the degree symbol
    std::cout << "Temperature in Celsius: " << celsius << degree << "C" << std::endl;

    return 0; // Return 0 to indicate successful completion
}