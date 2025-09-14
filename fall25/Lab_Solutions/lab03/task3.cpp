/**********************************************************************************
 * @file    task3.cpp
 *
 * @brief   You are programming a micro-controller for a smart sensor. This
 *          sensor's raw data output is an unsigned int. Depending on the
 *          environmental conditions, the data needs to be adjusted. If the
 *          raw data is within a specific range, you need to perform a right
 *          bit shift to normalize the value. Otherwise, you need to perform
 *          a left bit shift to amplify the signal for further processing.
 *          This is a common technique for managing data precision and scale
 *          in embedded systems.
 *
 * @details Write a C++ program that takes two inputs from the user:
 *              1. An unsigned int representing the raw sensor data.
 *              2. An integer shift_amount representing the number of positions
 *                 to shift.
 *
 *          The program should use if-else statements to check the following
 *          conditions:
 *              - If the raw data is between 100 and 500 (inclusive), perform a
 *                right bit shift by shift_amount and print the new value.
 *              - Otherwise, perform a left bit shift by shift_amount and print
 *                the new value.
 *
 * @note    Ensure the program handles invalid inputs.
 *************************************************************************************/

#include <iostream>

int main() {
    unsigned int rawData;
    int shiftAmount;

    // Get user input
    std::cout << "Enter the raw sensor data (unsigned int): ";
    std::cin >> rawData;
    std::cout << "Enter the shift amount (integer): ";
    std::cin >> shiftAmount;

    // Validate shift amount
    if (shiftAmount < 0) {
        std::cout << "Error: Shift amount must be a non-negative integer." << std::endl;
        return 1;
    }

    unsigned int adjustedData;

    // Check the range and perform the appropriate bit shift
    if (rawData >= 100 && rawData <= 500) {
        adjustedData = rawData >> shiftAmount; // Right shift
        std::cout << "The adjusted sensor data after right shift is: " << adjustedData << std::endl;
    }
    else {
        adjustedData = rawData << shiftAmount; // Left shift
        std::cout << "The adjusted sensor data after left shift is: " << adjustedData << std::endl;
    }

    return 0;
}