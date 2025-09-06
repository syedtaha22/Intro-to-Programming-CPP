/***********************************************************************************************
 * @file    task3.cpp
 *
 * @brief   When monitoring environmental conditions, it’s often important to classify
 *          temperature readings into simple categories for quick assessment. For instance,
 *          a sensor might report a temperature in degrees Celsius, and we need to determine
 *          whether the environment is considered Cold, or Hot based on predefined
 *          thresholds. This helps in systems like automated climate control, weather
 *          monitoring stations, or smart home devices.
 *
 * @details Write a C++ program that:
 *              - Prompts the user to enter the current temperature in Celsius.
 *              - Checks the value and prints one of the following messages:
 *                  - 'Cold' if the temperature is below 25°C.
 *                  - 'Hot' if the temperature is 25°C and above.
 *          Make sure your program reads the input only once and produces the correct output
 *          for any valid numeric temperature.
 **********************************************************************************************/

#include <iostream>
#include <string>

int main() {
    double temperature;
    std::cout << "Enter the current temperature in Celsius: ";
    std::cin >> temperature;

    std::string result = (temperature < 25) ? "Cold" : "Hot";

    std::cout << result << std::endl;

    return 0;
}
