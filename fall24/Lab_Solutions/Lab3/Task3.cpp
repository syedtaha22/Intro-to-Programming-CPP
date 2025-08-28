/*
    [Task 3]:
    Write a program that asks the user to input a temperature in Celsius. Based on the
    temperature, use an if-else structure to display the following:
        1. If the temperature is below 0°C, print "It's freezing!" (Blue color)
        2. If the temperature is between 0°C and 30°C, print "The weather is normal." (Green color)
        3. If the temperature is above 30°C, print "It's hot outside!" (Red color)
*/

// Include the iostream library
#include <iostream>

// main function
int main() {
    // Declare a variable to store the user's input
    float temperature;

    // Display a message to the user
    std::cout << "Enter the temperature in Celsius: ";
    // Store the user's input
    std::cin >> temperature;

    // Check the temperature using if-else structure
    if (temperature < 0) {
        // If the temperature is below 0°C in blue color
        std::cout << "\033[1;34m"; // Set the text color to blue
        std::cout << "It's freezing!" << std::endl;
        std::cout << "\033[0m"; // Reset the text color
    }
    else if (temperature >= 0 && temperature <= 30) {
        // If the temperature is between 0°C and 30°C in green color
        std::cout << "\033[1;32m"; // Set the text color to green
        std::cout << "The weather is normal." << std::endl;
        std::cout << "\033[0m"; // Reset the text color
    }
    else {
        // If the temperature is above 30°C
        std::cout << "\033[1;31m"; // Set the text color to red
        std::cout << "It's hot outside!" << std::endl;
        std::cout << "\033[0m"; // Reset the text color
    }

    // return 0 to indicate the program executed successfully
    return 0;
}