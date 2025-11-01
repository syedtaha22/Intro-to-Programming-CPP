/****************************************************************************************
 * @file    task1.cpp
 *
 * @details Write a function that alphabetically sorts the characters in a given string.
 *          The function should take an additional argument that specifies how many
 *          characters (from the beginning) to sort. By default, the function should sort
 *          the entire string.
 *
 *          If a valid number N is provided, then only the first N characters should be
 *          sorted, while the rest of the string should remain unchanged. You may use any
 *          simple sorting algorithm of your choice (such as insertion sort or selection
 *          sort), but do not use std::sort or any built-in sorting functions.
 *
 *          The function should return the sorted string.
 *
 *              std::string sort_string(const std::string& str, int n = -1);
 *
 *          After implementing this function, think about how the code would need to change
 *          if we wanted to make it sort the string in place (modifying the original).
 *          Then, implement a second version of the function:
 *              - sort_string — returns a new sorted string.
 *              - sort_string_inplace — modifies the original string.
 *
 * @note    Use clear, reusable logic and avoid redundant code between the two functions.
 *          Make the sorting case-insensitive (i.e., 'A' and 'a' are considered equal
 *          in order).
 *
 ****************************************************************************************/

#include <iostream>
#include <string>

 /**
  * @brief Helper function to perform insertion sort on the first n
  * characters of a string. We will use this function in both sorting variants.
  *
  * @param str The string to be sorted.
  * @param n   The number of characters to sort. If n is negative or
  *            exceeds the string length, the entire string is sorted.
  *
  */
void insertion_sort(std::string& str, int n) {
    int length = (n < 0 || n > static_cast<int>(str.size())) ? str.size() : n;

    for (int i = 1; i < length; ++i) {
        char key = str[i];
        int j = i - 1;

        // Move elements of str[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && std::tolower(str[j]) > std::tolower(key)) {
            str[j + 1] = str[j];
            --j;
        }
        str[j + 1] = key;
    }
}

/**
 * @brief Function that returns a new sorted string
 *
 * @param str The original string to be sorted.
 * @param n   The number of characters to sort. If n is negative or
 *            exceeds the string length, the entire string is sorted.
 * @return A new string with the first n characters sorted.
 */
std::string sort_string(const std::string& str, int n = -1) {
    std::string sorted_str = str; // Create a copy to sort
    insertion_sort(sorted_str, n);
    return sorted_str;

}

/**
 * @brief Function that sorts the string in place
 *
 * @param str The string to be sorted.
 * @param n   The number of characters to sort. If n is negative or
 *            exceeds the string length, the entire string is sorted.
 */
void sort_string_inplace(std::string& str, int n = -1) {
    insertion_sort(str, n);
}

int main() {
    std::string input;
    int n;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::cout << "Enter number of characters to sort (negative for all): ";
    std::cin >> n;

    // Using the function that returns a new sorted string
    std::string sorted_str = sort_string(input, n);
    std::cout << "Sorted string (new): " << sorted_str << "\n";

    // Using the function that sorts the string in place
    sort_string_inplace(input, n);
    std::cout << "Sorted string (in place): " << input << "\n";


    return 0;
}