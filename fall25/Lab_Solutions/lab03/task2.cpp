/***********************************************************************************
 * @file    task2.cpp
 *
 * @brief   You are developing firmware for an embedded system that controls
 *          a series of status lights. Each light corresponds to a specific
 *          system component. The status of all 32 components is encoded in a
 *          single unsigned int variable, where each bit represents the status
 *          of one component. A 1 indicates the component is active (light on),
 *          and a 0 indicates it is inactive (light off). Your task is to write
 *          a program that can check if a specific status light is on.
 *
 * @details Write a C++ program that takes two inputs from the user:
 *              1. An unsigned int representing the status word.
 *              2. An integer n (0-31) representing the bit position (the component
 *                 number).
 *          The program should use a bitwise shift and an if-else statement to
 *          determine if the nth bit is set. The output should be a clear message
 *          indicating whether the status light is ON or OFF.
 *
 * @note    Ensure the program handles invalid inputs.
 **********************************************************************************/

#include <iostream>

int main() {
    unsigned int statusWord;
    int bitPosition;

    // Get user input
    std::cout << "Enter the status word (unsigned int): ";
    std::cin >> statusWord;
    std::cout << "Enter the bit position (0-31): ";
    std::cin >> bitPosition;

    // Validate bit position
    if (bitPosition < 0 || bitPosition > 31) {
        std::cout << "Error: Bit position must be between 0 and 31." << std::endl;
        return 1;
    }

    // Check if the nth bit is set
    if ((statusWord >> bitPosition) & 1) {
        std::cout << "The status light for component " << bitPosition << " is ON." << std::endl;
    }
    else {
        std::cout << "The status light for component " << bitPosition << " is OFF." << std::endl;
    }

    return 0;
}