/****************************************************************************************
 * @file    task2.cpp
 *
 * @details Create a function compareNumbers that takes two numbers as input and displays
 *          whether the first number is greater than, less than, or equal to the second
 *          number. The program should prompt the user for two values and clearly print
 *          the comparison result.
 *
 ****************************************************************************************/

#include <iostream>

 /**
  * @brief Print the comparison result between two numbers.
  *
  * @param num1 First number
  * @param res  Comparison result as a string
  * @param num2 Second number
  */
void printResults(double num1, const std::string& res, double num2) {
    std::cout << num1 << " is " << res << " " << num2 << "." << std::endl;
}

/**
 * @brief Compare two numbers and display whether the first number is greater than,
 *        less than, or equal to the second number.
 *
 * @param num1 First number
 * @param num2 Second number
 */
void compareNumbers(double num1, double num2) {
    if (num1 > num2)       printResults(num1, "greater than", num2);
    else if (num1 < num2)  printResults(num1, "less than", num2);
    else                   printResults(num1, "equal to", num2);
}

int main() {
    double num1, num2;

    // Prompt user for two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Compare the two numbers
    compareNumbers(num1, num2);

    return 0;
}