/*********************************************************************************************
 * @file   task5.cpp
 * 
 * @details Write a recursive function isPalindrome() that returns true if and only if the 
 * input word is a palindrome (a palindrome is a word, number, phrase, or other sequence of
 * characters which reads the same backward as forward, such as "madam" or "racecar" or the
 * number "10201".)
 * 
 * Hint: Ensure that the first and the last letters are the same, and then recursively check
 * the rest of the word. Use the substr() function to get the substring of a given string.
 * To compute a substring of a given string str, the substr() function can be used.
 * The first argument of the function is the starting index of the substring, and the second
 * argument is the length of the substring.
 * Here are a few examples (using str = "Hello World"):
 *   - str.substr(1) returns a substring of str starting from index 1 till the 
 *     end of the string: "ello World"
 *   - str.substr(1, 3) returns a substring of str starting from index 1 and of length 3: "ell"
 *   - str.substr(1, str.length()-2) returns a substring of str starting from index 1 and of
 *     length str.length()-2: "ello Worl"
 **********************************************************************************************/

#include <iostream>
#include <string>
#include <vector>

/**
 * @brief   Recursively checks if a given string is a palindrome
 *
 * @param   str     Input string to check
 * @return  true if the string is a palindrome, false otherwise
 */
bool isPalindrome(const std::string& str) {
    int n = str.length();
    // Base case: if the string is empty or has one character
    if (n <= 1) return true;

    // Check first and last characters
    if (str[0] != str[n - 1]) return false;

    // Recursive call on the substring excluding the first and last characters
    return isPalindrome(str.substr(1, n - 2));
}

int main() {

    std::vector<std::string> test_strings = {
        "madam",
        "hello",
        "racecar",
        "able was I ere I saw elba",
    };

    for (const auto& s : test_strings) {
        if (isPalindrome(s))
            std::cout << "\"" << s << "\" is a palindrome." << std::endl;
        else
            std::cout << "\"" << s << "\" is not a palindrome." << std::endl;
    }

    return 0;
}
