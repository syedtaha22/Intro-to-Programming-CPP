/*********************************************************************************************
 * Task 6:
 *  C++ provides a built-in function to calculate the square root of a number.
 *  This function is called sqrt(). It is defined in the <cmath> header file.
 *  and can be included in your program using the #include <cmath> directive.
 *
 *  The syntax for using the sqrt() function is as follows:
 *      sqrt(number);
 *
 *  It takes a single argument, which is the number for which you want to calculate the square
 *  root. It then returns the square root of that number as a floating-point value.
 *
 *  For example:
 *      sqrt(16) will return 4.0.
 *
 *  Write a program that assigns a variable an integer then it passes that integer to the
 *  sqrt() function which will give us the square root of the number. This program should:
 *      - Assign one variable an integer
 *      - Display the square root of that integer
 *  Output Workflow:
 *      - Display the number
 *      - Display the square root of that number
 ********************************************************************************************/

#include <iostream>
#include <cmath> // Include cmath for sqrt function

int main() {
    int number = 145; // Assign an integer to the variable

    // Display the number and its square root
    std::cout << "The number is: " << number << std::endl;
    std::cout << "The square root of " << number << " is: " << sqrt(number) << std::endl;

    return 0; // Return 0 to indicate successful completion
}