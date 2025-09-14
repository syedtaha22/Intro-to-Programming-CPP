/********************************************************************
 * @file task1.cpp
 *
 * @details Write a program that asks for a student’s score (0-100)
 *          and prints their grade based on the score:
 *              - 90-100  : A
 *              - 80-89   : B
 *              - 70-79   : C
 *              - 60-69   : D
 *              - Below 60: F
 *
 * @note    Ensure the program handles invalid inputs
 *          (e.g., scores below 0 or above 100).
 *
 ********************************************************************/

#include <iostream>

int main() {
    int score;
    char grade;

    std::cout << "Enter the student's score (0-100): ";
    std::cin >> score;

    if (score >= 90 && score <= 100)    grade = 'A';
    else if (score >= 80 && score < 90) grade = 'B';
    else if (score >= 70 && score < 80) grade = 'C';
    else if (score >= 60 && score < 70) grade = 'D';
    else if (score >= 0 && score < 60) grade = 'F';
    else {
        std::cout << "Invalid score. Please enter a score between 0 and 100." << std::endl;
        return 1; // Exit with error code
    }

    std::cout << "The student's grade is: " << grade << std::endl;

    return 0; // Indicate successful execution
}