/***************************************************************************************
 * @file    task1.cpp
 *
 * @details Write a C++ program that asks the user to input ten numbers. The program
 *          should calculate and print the minimum, maximum, and average of the
 *          numbers. After that, print the numbers in reverse order of input.
 **************************************************************************************/

#include <iostream>

 //  #define SIZE 10 // Defines a constant for the size of the array, also valid.

int main() {
    const int SIZE = 10;
    // constexpr int SIZE = 10; // This is also valid

    int numbers[SIZE];

    // Input 10 numbers from the user
    std::cout << "Enter " << SIZE << " numbers:\n";
    for (int i = 0; i < SIZE; ++i) std::cin >> numbers[i];

    // Calculate minimum, maximum, and average
    int min = numbers[0];
    int max = numbers[0];
    int sum = 0;

    for (int i = 0; i < SIZE; ++i) {
        if (numbers[i] < min) min = numbers[i];
        if (numbers[i] > max) max = numbers[i];
        sum += numbers[i];
    }

    // Static cast to double to prevent integer division
    double average = static_cast<double>(sum) / SIZE;

    // Print results
    std::cout << "Minimum: " << min << "\n";
    std::cout << "Maximum: " << max << "\n";
    std::cout << "Average: " << average << "\n";

    // Print numbers in reverse order
    std::cout << "Numbers in reverse order:\n";
    for (int i = SIZE - 1; i >= 0; --i) std::cout << numbers[i] << " ";
    std::cout << "\n";

    return 0; // Indicate successful completion
}