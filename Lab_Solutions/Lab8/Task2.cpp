/*
    Task 2:
        Create a function `celsiusToFahrenheit` that converts a temperature from Celsius
        to Fahrenheit. This function should take a temperature in Celsius as input, convert
        it using the formula Fahrenheit = (Celsius * 9/5) + 32, and return the result. The
        user should be prompted to enter a temperature in Celsius, which will then be passed to this function.
*/

// Include the iostream library
#include <iostream>

// Function to convert temperature from Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    // Declare a variable to store the temperature in Celsius
    double celsius;

    // Prompt the user to enter a temperature in Celsius
    std::cout << "Enter a temperature in Celsius: ";
    std::cin >> celsius;

    // Convert the temperature to Fahrenheit and display the result
    std::cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(celsius) << std::endl;

    // Return 0 to indicate successful completion
    return 0;
}