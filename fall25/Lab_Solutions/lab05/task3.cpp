/************************************************************************************************
 * @file    task3.cpp
 *
 * @brief   In probability and statistics, random experiments are repeated many times
 *          to observe how outcomes are distributed. For instance, if you flip a fair coin
 *          a large number of times, you expect heads and tails to appear with roughly equal
 *          frequency, though short runs may show some imbalance. Similarly, when generating
 *          random digits on a computer, repeating the experiment many times gives us a sense
 *          of how often each digit appears.
 *
 * @details Write a program to simulate such an experiment. Generate random numbers
 *          between 0 and 9 exactly one hundred times. Keep track of how many times
 *          each digit appears during the experiment. At the end, print the distribution
 *          of results, where each digit is followed by a number of * characters equal
 *          to its count.
 *
 * @note    You may use std::rand and std::srand from the <cstdlib> library to generate
 *          random numbers. To ensure different results each time you run the program,
 *          use std::srand with a seed based on the current time (using std::time from
 *          the <ctime> library).
 ***********************************************************************************************/

#include <iostream>
#include <cstdlib> // For std::rand and std::srand
#include <ctime>  // For std::time

 // #define: Defines a preprocessor macro. The compiler replaces instances of the macro with 
 // its value before compilation.
#define SIZE 10          // Digits range from 0 to 9
#define EXPERIMENTS 100  // Number of random numbers to generate

int main() {
    int counts[SIZE] = { 0 };

    // Seed the random number generator with the current time,
    //  to ensure different results each run
    std::srand(std::time(0));

    // Perform the experiment 100 times
    for (int i = 0; i < EXPERIMENTS; ++i) {
        int randomNum = std::rand() % SIZE; // Generate a random number between 0 and 9
        counts[randomNum]++; // Increment the count for the generated number
    }

    // Print the distribution of results
    std::cout << "Digit Distribution:\n";
    for (int i = 0; i < SIZE; ++i) {

        std::cout << i << ": ";
        for (int j = 0; j < counts[i]; ++j) std::cout << "*";
        std::cout << "\n";

    }

    return 0; // Indicate successful completion
}
