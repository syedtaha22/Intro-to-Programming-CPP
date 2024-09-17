/*
    [Task 5a]:
    This task simulates data compression by packing two characters into a single integer using bitwise shifts.
        1)	Step 1: Input Two Characters:
                i)	Ask the user to input two characters.
        2)	Step 2: Pack the Characters Using Left Shift:
                i)	Shift the bits of the first character to the left by 8 bits and combine it with
                    the second character using the OR (|) operator.
                ii)	Store the packed result in an integer.
        3)	Step 3: Unpack the Characters
                i)	Use the right shift operator to retrieve the first character from the packed integer.
                ii)	Use a bitmask (& 0xFF) to retrieve the second character from the packed integer.
    Print both characters and verify they match the original input.
*/

// Include the iostream library
#include <iostream>

// main function
int main() {
    // Declare variables to store the user's input
    char firstChar, secondChar;
    int packedResult;

    // Display a message to the user
    std::cout << "Enter the first character: ";
    // Store the user's input
    std::cin >> firstChar;

    // Display a message to the user
    std::cout << "Enter the second character: ";
    // Store the user's input
    std::cin >> secondChar;

    // Pack the characters using bitwise shifts
    packedResult = (firstChar << 8) | secondChar;

    // Unpack the characters
    char unpackedFirstChar = packedResult >> 8;
    char unpackedSecondChar = packedResult & 0xFF;

    // Display the original characters
    std::cout << "Original Characters: " << firstChar << " " << secondChar << std::endl;

    // Display the packed result
    std::cout << "Packed Result: " << packedResult << std::endl;

    // Display the unpacked characters
    std::cout << "Unpacked Characters: " << unpackedFirstChar << " " << unpackedSecondChar << std::endl;

    // return 0 to indicate the program executed successfully
    return 0;
}