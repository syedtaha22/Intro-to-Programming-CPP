/*
    [Task 2]:
    Write a program that demonstrates integer overflow by casting a large floating-point value to an int.
    Perform the following:
        1. Ask the user to input a large floating-point number (e.g., greater than INT_MAX).
        2. Cast the float to an integer and display the result.
        3. Explain why overflow occurs and what happens to the number after casting.
*/

// Include the iostream library
#include <iostream>

// main function
int main() {
    // Declare a variable to store the user's input
    float largeFloat;

    // Display a message to the user
    std::cout << "Enter a large floating-point number: ";
    // Store the user's input
    std::cin >> largeFloat;

    // Cast the float to an integer
    int largeInt = static_cast<int>(largeFloat);

    // Display the result
    std::cout << "Float Value: " << largeFloat << std::endl;
    std::cout << "Integer Value: " << largeInt << std::endl;

    // Explain why overflow occurs and what happens to the number after casting
    /*
        Overflow occurs when a value exceeds the maximum value that can be stored in a data type.
        In this case, when a large floating-point number is cast to an integer, the decimal part of the number is truncated,
        and the resulting integer may exceed the maximum value that can be stored in an int data type.
        When overflow occurs, the value "wraps around" and starts from the minimum value that can be stored in the data type.
        For example, if the large floating-point number is greater than INT_MAX, casting it to an int will result in overflow,
        and the resulting integer will be a negative value.
    */
    return 0;
}