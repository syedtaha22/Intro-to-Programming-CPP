/*
    [Question 8]:
    The International Standard Book Number (ISBN) is a 10-digit code that uniquely identifies a book.
    The rightmost digit of an ISBN, called the checksum digit (denoted as `d10`), is used to verify the
    accuracy of the other nine digits. The checksum digit is calculated in such a way that the weighted
    sum of all 10 digits is a multiple of 11.

    The weighted sum is calculated using the following formula:
        1*d₁ + 2*d₂ + 3*d₃ + ... + 10*d₁₀

    Here, `di` represents the digit at the i-th position from the left (where `d₁` is the first digit,
    `d₂` is the second digit, and so on).

    The checksum digit (`d10`) can be any value from 0 to 10. If the value of `d10` is 10, it is
    conventionally represented by the letter 'X' in an ISBN.

    Example:
    Suppose the first 9 digits of the ISBN are `020131452`. To find the checksum digit `d10`, we compute
    the weighted sum:
        1*0 + 2*2 + 3*0 + 4*1 + 5*3 + 6*1 + 7*4 + 8*5 + 9*2 = 115

    Now, we need to find a ` d₁₀` such that:

        115 + 10*d₁₀ is a multiple of 11.

    The only value of ` d₁₀` that satisfies this condition is `5`, because `115 + 10*5 = 165`,
    and 165 is a multiple of 11. Thus, the full 10-digit ISBN is `0201314525`.

    Task:
    Write a program that takes a 9-digit integer as input, computes the checksum digit ` d₁₀` and
    prints the complete 10-digit ISBN number. If the checksum digit ` d₁₀` is 10, simply print the letter 'X'.

    Hint: You can access individual digits of a 9-digit integer `x` using the modulus (`%`)
    and division (`/`) operations as shown below:

        int d9 = x % 10;
        int d8 = (x / 10) % 10;
        int d7 = (x / 100) % 10;
        // and so on...
*/

// Include iosstream library
#include <iostream>
// Include string library
#include <string>

// Main function
int main() {
    // Declare integer variable to store 9-digit ISBN number
    int isbn;
    // Declare integer variable to store checksum digit
    int d10;

    // Ask user to enter 9-digit ISBN number
    std::cout << "Enter 9-digit ISBN number: ";
    // Store user's 9-digit ISBN number in isbn variable
    std::cin >> isbn;

    // Get individual digits of 9-digit ISBN number
    int d9 = isbn % 10;
    int d8 = (isbn / 10) % 10;
    int d7 = (isbn / 100) % 10;
    int d6 = (isbn / 1000) % 10;
    int d5 = (isbn / 10000) % 10;
    int d4 = (isbn / 100000) % 10;
    int d3 = (isbn / 1000000) % 10;
    int d2 = (isbn / 10000000) % 10;
    int d1 = (isbn / 100000000) % 10;

    // Calculate weighted sum
    int weightedSum = 1 * d1 + 2 * d2 + 3 * d3 + 4 * d4 + 5 * d5 + 6 * d6 + 7 * d7 + 8 * d8 + 9 * d9;

    // Calculate checksum digit
    d10 = weightedSum % 11;

    // Convert the 9-digit number to a string
    std::string isbnStr = std::to_string(isbn);

    // Convert checksum digit to string
    std::string checksumStr = (d10 == 10) ? "X" : std::to_string(d10);

    // Concatenate the ISBN number with the checksum digit
    std::string fullIsbn = isbnStr + checksumStr;

    // Display the complete 10-digit ISBN number
    std::cout << "Complete 10-digit ISBN number: " << isbn << ((d10 == 10) ? "X" : std::to_string(d10)) << std::endl;

    return 0; // Return 0 to indicate successful completion
}