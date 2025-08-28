/*
    Task 3:
        Write a function countDigit(number, digit) that recursively counts the occurrences
        of the specified digit in the given number and returns the count.

        Create a function getRandomDigit() that returns a random digit between 0-9 for testing
        purposes. Create another function getRandomNumber() that generates a 15-digit long random
        number.

        In the main function, Create an array of 10 random numbers (15-digit long) and 10 random
        digits (0-9). For each pair of number and digit, call the countDigit function to count the
        occurrences of the digit in the number and print the result.

        Ensure that getRandomNumber() always returns a 15-digit long number.
        You may use the rand() function to generate random numbers. Use a suitable data type to
        store the number to avoid overflow issues.
*/

// Include the required libraries
#include <iostream>
#include <ctime>
#include <random>

// Recursive function to count the occurrences of a digit in a number
int countDigit(long long number, int digit) {
    // Base case: If the number is 0, return 0
    if (number == 0) return 0;

    // Recursive case:
    // If the last digit of the number is equal to the specified digit,
    // increment the count by 1 and call the function with the number divided by 10
    // to remove the last digit
    if (number % 10 == digit) return 1 + countDigit(number / 10, digit);

    // If the last digit of the number is not equal to the specified digit,
    // call the function with the number divided by 10 to remove the last digit
    else return countDigit(number / 10, digit);
}

// Function to generate a random digit between a and b
int generateRandomDigit(int a = 0, int b = 9) {
    return rand() % (b - a + 1) + a;
}

// Function to generate a random 15-digit number
long long generateRandomNumber() {
    long long num = 0;

    // Ensure the first digit is between 1 and 9 (non-zero)
    num = generateRandomDigit(1, 9);

    // Generate the remaining 14 digits (can be 0-9)
    for (int i = 1; i < 15; i++) {
        num = num * 10 + generateRandomDigit();  // Add digits after the first one
    }

    return num;
}

int main() {
    // seed the random number generator
    srand(time(0));

    const int SIZE = 10;

    // Test the countDigit function with random inputs
    long long test_nums[SIZE];
    int test_digits[SIZE];

    // Generate random numbers and digits for testing
    for (int i = 0; i < SIZE; i++) {
        test_nums[i] = generateRandomNumber();
        test_digits[i] = generateRandomDigit();
    }

    // Test the countDigit function with the generated inputs
    for (int i = 0; i < SIZE; i++) {
        std::cout << "Number: " << test_nums[i] << ", Digit: " << test_digits[i] << ", Count: "
            << countDigit(test_nums[i], test_digits[i]) << std::endl;
    }






    return 0;
}