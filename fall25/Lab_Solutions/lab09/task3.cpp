/********************************************************************************************
 * @file    task3.cpp
 *
 * @details Write a function that reverses a string recursively in place.
 *          The function should:
 *            - Take a reference to a `std::string` and indices `start` and `end` as input.
 *            - Reverse the string in place recursively.
 *            - Not return any value.
 *
 *         Prototype:
 *              void reverse_string(std::string& str, int start = 0, int end = -1);
 *
 *          Call this function from `main()` with a sample string to verify that the reversal works correctly.
 *
 ********************************************************************************************/

#include <iostream>
#include <string>

 /**
  * @brief   Recursively reverses a string in place
  *
  * @param   str     Reference to the string to be reversed
  * @param   start   Starting index for reversal
  * @param   end     Ending index for reversal
  */
void reverse_string(std::string& str, int start = 0, int end = -1) {
    if (end == -1) end = str.length() - 1;
    if (start >= end) return; // Base case: indices have met or crossed

    // Swap characters at start and end
    std::swap(str[start], str[end]);

    // Recursive call moving towards the center
    reverse_string(str, start + 1, end - 1);
}


int main() {
    std::string sample_string = "Hello, World!";
    std::cout << "Original string: " << sample_string << std::endl;

    reverse_string(sample_string);

    std::cout << "Reversed string: " << sample_string << std::endl;

    return 0;
}
