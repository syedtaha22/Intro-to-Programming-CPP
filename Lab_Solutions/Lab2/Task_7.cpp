/*
    [Question 7]:
    Initialize two string literals and take numeric input for them from the user. Concatenate the strings
    first and print to console, then convert the numbers from string form to int and perform addition
    on the numbers and print to console. You can convert string variables to int by using stoi(string).
*/

// Include iostream library
#include <iostream>
// Include string library
#include <string>

// Main function
int main() {
    // Declare string variables to store the string literals
    std::string str1, str2;

    // Ask user to enter the first number as a string
    std::cout << "Enter the first number as a string: ";
    // Store user input in str1 variable
    std::cin >> str1;

    // Ask user to enter the second number as a string
    std::cout << "Enter the second number as a string: ";
    // Store user input in str2 variable
    std::cin >> str2;

    // Concatenate the strings
    std::string concatenated = str1 + str2;

    // Display the concatenated string
    std::cout << "Concatenated string: " << concatenated << std::endl;

    // Convert the strings to integers
    int num1 = std::stoi(str1);
    int num2 = std::stoi(str2);

    // Perform addition on the numbers
    int sum = num1 + num2;

    // Display the sum of the numbers
    std::cout << "Sum of the numbers: " << sum << std::endl;

    return 0; // Return 0 to indicate successful completion

}