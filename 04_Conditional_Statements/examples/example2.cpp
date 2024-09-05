/*
    Program to Check Temperature ranges.
*/

// include the iostream library
#include <iostream>

// main function
int main() {
    // declare a variable to store the temperature
    int temperature;
    // ask the user to enter the temperature
    std::cout << "Enter the temperature in Celsius: ";
    // read the temperature from the user
    std::cin >> temperature;

    // if the temperature is greater than or equal to 30
    if (temperature >= 30) {
        // print that it is hot
        std::cout << "It's hot." << std::endl;

        // if the temperature is greater than 40
        if (temperature > 40) {
            // print that it is extremely hot
            std::cout << "It's extremely hot!" << std::endl;
        }
    } // if the temperature is greater than or equal to 15
    else if (temperature >= 15) {
        // print that it is warm
        std::cout << "It's warm." << std::endl;
    } // otherwise
    else {
        // print that it is cold
        std::cout << "It's cold." << std::endl;
    }

    // return 0 to indicate that the program has run successfully
    return 0;
}