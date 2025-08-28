/***************************************************
 * Task 6: Min, Max, and Average of Random Array
 *
 * Write a C++ program that generates an array of 100 random integers, each ranging
 * from 1 to 1,000. The program should then calculate and display the minimum value,
 * maximum value, and average of the numbers in the array.
****************************************************/

// Include the iostream library
#include <iostream>
// Include the random library
#include <random>
// Include the ctime library for time()
#include <ctime>

// Main function
int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(0));

    const int SIZE = 100;

    // Declare an array to store 1,000 random integers
    int numbers[SIZE];

    // Generate 1,000 random integers and store them in the array
    for (int i = 0; i < SIZE; i++) {
        numbers[i] = std::rand() % 1000 + 1;
    }

    // Initialize variables to store the minimum, maximum, and sum of the numbers
    int min = numbers[0];
    int max = numbers[0];
    int sum = 0;

    // Calculate the minimum, maximum, and sum of the numbers
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
        sum += numbers[i];
    }

    // Calculate the average of the numbers
    double average = static_cast<double>(sum) / SIZE;

    // Display the minimum, maximum, and average of the numbers
    std::cout << "Minimum: " << min << std::endl;
    std::cout << "Maximum: " << max << std::endl;
    std::cout << "Average: " << average << std::endl;

    // Return 0 to indicate successful completion
    return 0;
}
