/*
    [Question 5]:
    Write a Program that generates Three Random integers in range [50, 100], Display the numbers,
    and their sum, average, The maximum, and the minimum number.

    Note: Use fmin() and fmax() from the <cmath> library.
*/

#include <iostream> // Include the iostream library
#include <cmath> // Include the cmath library for fmin() and fmax()
#include <cstdlib> // Include the cstdlib library for rand() and srand()
#include <ctime> // Include the ctime library for time()

// Main function
int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate three random integers in the range [50, 100]
    // rand() % 51 generates a random number in the range [0, 50]
    // Adding 50 to the result shifts the range to [50, 100]
    int num1 = rand() % 51 + 50;
    int num2 = rand() % 51 + 50;
    int num3 = rand() % 51 + 50;

    // Display the generated numbers
    std::cout << "Generated Numbers: " << num1 << ", " << num2 << ", " << num3 << std::endl;

    // Calculate the sum of the numbers
    int sum = num1 + num2 + num3;

    // Calculate the average of the numbers
    double average = sum / 3.0;

    // Calculate the maximum of the numbers
    int maximum = fmax(num1, fmax(num2, num3));

    // Calculate the minimum of the numbers
    int minimum = fmin(num1, fmin(num2, num3));

    // Display the sum, average, maximum, and minimum
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Average: " << average << std::endl;
    std::cout << "Maximum: " << maximum << std::endl;
    std::cout << "Minimum: " << minimum << std::endl;

    return 0; // Return 0 to indicate successful completion
}