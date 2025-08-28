/*
    Task 4:
        Write a recursive function `isPalindrome` that checks whether a given string
        is a palindrome.

        In the main function, prompt the user to enter a string, then print the original
        string. Modify the string directly (without creating any copies) by implementing
        the following functions:
            - A function that removes all white spaces from the string.
            - A function that converts all characters in the string to lowercase.
            - A function that removes all numbers from the string.

        After cleaning the string, print the modified version and then call the `isPalindrome`
        function to determine if the cleaned string is a palindrome.

        Ensure that all modifications are done directly on the original string and no copies are created.
*/

// Include the required libraries
#include <iostream>
#include <string>
#include <cctype>

// Function to remove all white spaces from the string
void removeSpaces(std::string& str) {
    // Iterate through the string and remove spaces
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            str.erase(i, 1);
            i--;
        }
    }
}

// Function to convert all characters in the string to lowercase
void toLowercase(std::string& str) {
    // Iterate through the string and convert characters to lowercase
    for (int i = 0; i < str.length(); i++) {
        str[i] = std::tolower(str[i]);
    }
}

// Function to remove all numbers from the string
void removeNumbers(std::string& str) {
    // Iterate through the string and remove numbers
    for (int i = 0; i < str.length(); i++) {
        if (std::isdigit(str[i])) {
            str.erase(i, 1);
            i--;
        }
    }
}

// Recursive function to check if a string is a palindrome
bool isPalindrome(const std::string& str, int front, int back) {
    // Base case: If the start index is greater than or equal to the end index
    if (front >= back) {
        return true;
    }
    // Check if the characters at the start and end indices are equal
    if (str[front] != str[back]) {
        return false;
    }
    // Recursively check the substring between start and end indices
    return isPalindrome(str, front + 1, back - 1);
}

// Wrapper function to check if a string is a palindrome
bool isPalindrome(const std::string& str) {
    return isPalindrome(str, 0, str.length() - 1);
}

int main() {
    // Prompt the user to enter a string
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Print the original string
    std::cout << "Original String: " << input << std::endl;

    // Modify the string directly
    removeSpaces(input);
    toLowercase(input);
    removeNumbers(input);

    // Print the cleaned string
    std::cout << "Cleaned String: " << input << std::endl;

    // Check if the cleaned string is a palindrome
    if (isPalindrome(input)) {
        std::cout << "The Cleaned string is a palindrome." << std::endl;
    }
    else std::cout << "The Cleaned string is not a palindrome." << std::endl;

    return 0;
}