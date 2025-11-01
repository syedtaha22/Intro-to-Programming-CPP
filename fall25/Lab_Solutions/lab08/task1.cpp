/****************************************************************************************
 * @file    task1.cpp
 *
 * @details Create a function massToEnergy that calculates the equivalent energy of a
 *          given mass using Einstein’s formula:
 *
 *              E = mc^2
 *
 *          where E is energy (in joules), m is mass (in kilograms), and
 *          c = 3×10^8 m/s is the speed of light.
 *
 *          The program should prompt the user to enter their mass in kilograms and
 *          display the calculated energy.
 *
 ****************************************************************************************/
#include <iostream>

 ///@brief Speed of light squared constant
#define C_SQRD (3e8 * 3e8)

/**
 * @brief Calculate the equivalent energy of a given mass using Einstein's
 * formula:
 *         E = mc^2
 *
 * where E is energy (in joules), m is mass (in kilograms), and c = 3×10^8 m/s is
 * the speed of light.
 *
 * @param mass Mass in kilograms
 * @return Equivalent energy in joules
 */
double massToEnergy(double mass) {
    return mass * C_SQRD;
}

int main() {
    double mass;

    // Prompt user for mass input
    std::cout << "Enter your mass in kilograms: ";
    std::cin >> mass;

    // Calculate energy using massToEnergy function
    double energy = massToEnergy(mass);

    // Display the calculated energy
    std::cout << "The equivalent energy is " << energy << " joules." << std::endl;

    return 0;
}