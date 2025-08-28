/*
    [Question 1]:
    Write a program that prompts the user to enter an amount in PKR (Pakistani Rupees) and
    converts it to USD (US Dollars). Assume a conversion rate of 1 USD = 280 PKR. Display the result.
*/

// Include the iostream library
#include <iostream>

// Main function
int main() {
    // Declare variables to store the amount in PKR and USD
    double pkr, usd;

    // Ask the user to enter the amount in PKR
    std::cout << "Enter the amount in PKR: ";
    std::cin >> pkr; // Store the user input in the variable pkr

    // Convert the amount from PKR to USD using the conversion rate
    usd = pkr / 280.0;

    // Display the converted amount in USD
    std::cout << "Amount in USD: $" << usd << std::endl;

    return 0; // Return 0 to indicate successful completion
}