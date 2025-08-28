/*

    Task 1:
        Number-to-English:

        Write a program num2eng.cpp to read input an integer between −999,999 and 999,999 and
        print the English equivalent. Here is an exhaustive list of words that your program should use:

        negative, zero, one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve,
        thirteen, fourteen, fifteen, sixteen, seventeen, eighteen, nineteen, twenty, thirty, forty, fifty, sixty, seventy,
        eighty, ninety, hundred, thousand.

        Don't use hundred, when you can use thousand, e.g., use one thousand five hundred instead of fifteen hundred.
        Do not use arrays or vectors to store the words. Use if statements instead.

    Logic:
        The numbers can be divided into two parts: the thousands part and the hundreds part.

        For example, if the number is 123,456, the thousands part is 123 and the hundreds part is 456.

        Generally, the number can be written as: xxx,yyy
        Where xxx is the thousands part and yyy is the hundreds part.

        To convert the number to words, we first handle the thousands part and then the hundreds part.
            1) To get the thousands part, we divide the number by 1000 => xxx,yyy/1000 = xxx.yyy => xxx
            2) To get the hundreds part, we take the remainder of the division by 1000 => xxx,yyy % 1000 = yyy

        Now you can treat xxx and yyy as separate numbers from 0 to 999 and convert them to words.
        You would just have to print the words for xxx followed by "thousand" and then the words for yyy.

        And also handle edge cases like negative numbers and zero.
*/


#include <iostream>

// This program reads an integer between -999,999 and 999,999 and prints it in words.

int main() {
    // variable to store the number
    int number;
    // Ask the user to enter a number
    std::cout << "Enter an integer between -999999 and 999999: ";
    // Read the number
    std::cin >> number;

    // Check if the number is out of range
    if (number < -999999 || number > 999999) {
        // Print an error message
        std::cout << "Number out of range!" << std::endl;
        // Exit the program
        return 0;
    }

    // Handle negative numbers
    if (number < 0) {
        // Print "negative"
        std::cout << "negative ";
        // Make the number positive
        number = -number;
    }

    // Handle zero
    if (number == 0) {
        // Print "zero" and end the program
        std::cout << "zero" << std::endl;
        return 0;
    }

    // Handle the Thousands part
    if (number / 1000 > 0) {
        // This Gives the thousands part of the number
        // For example, if number = xxx,yyy => xxx,yyy/1000 = xxx.yyy => xxx 
        int thousands = number / 1000;

        // Handle hundreds within the thousands
        if (thousands / 100 > 0) {
            if (thousands / 100 == 1) std::cout << "one hundred ";
            else if (thousands / 100 == 2) std::cout << "two hundred ";
            else if (thousands / 100 == 3) std::cout << "three hundred ";
            else if (thousands / 100 == 4) std::cout << "four hundred ";
            else if (thousands / 100 == 5) std::cout << "five hundred ";
            else if (thousands / 100 == 6) std::cout << "six hundred ";
            else if (thousands / 100 == 7) std::cout << "seven hundred ";
            else if (thousands / 100 == 8) std::cout << "eight hundred ";
            else if (thousands / 100 == 9) std::cout << "nine hundred ";

            thousands %= 100;
        }

        // Handle tens and ones in thousands
        if (thousands >= 20) {
            if (thousands / 10 == 2) std::cout << "twenty ";
            else if (thousands / 10 == 3) std::cout << "thirty ";
            else if (thousands / 10 == 4) std::cout << "forty ";
            else if (thousands / 10 == 5) std::cout << "fifty ";
            else if (thousands / 10 == 6) std::cout << "sixty ";
            else if (thousands / 10 == 7) std::cout << "seventy ";
            else if (thousands / 10 == 8) std::cout << "eighty ";
            else if (thousands / 10 == 9) std::cout << "ninety ";

            thousands %= 10;
        }

        if (thousands > 0) {
            if (thousands == 1) std::cout << "one";
            else if (thousands == 2) std::cout << "two";
            else if (thousands == 3) std::cout << "three";
            else if (thousands == 4) std::cout << "four";
            else if (thousands == 5) std::cout << "five";
            else if (thousands == 6) std::cout << "six";
            else if (thousands == 7) std::cout << "seven";
            else if (thousands == 8) std::cout << "eight";
            else if (thousands == 9) std::cout << "nine";
        }

        std::cout << " thousand ";
        number %= 1000;  // Remove thousands part from number
    }

    // Define and handle hundreds part
    if (number / 100 > 0) {
        if (number / 100 == 1) std::cout << "one hundred ";
        else if (number / 100 == 2) std::cout << "two hundred ";
        else if (number / 100 == 3) std::cout << "three hundred ";
        else if (number / 100 == 4) std::cout << "four hundred ";
        else if (number / 100 == 5) std::cout << "five hundred ";
        else if (number / 100 == 6) std::cout << "six hundred ";
        else if (number / 100 == 7) std::cout << "seven hundred ";
        else if (number / 100 == 8) std::cout << "eight hundred ";
        else if (number / 100 == 9) std::cout << "nine hundred ";

        std::cout << "and ";

        number %= 100;
    }

    // Define how to print numbers from 20 to 99
    if (number >= 20) {
        if (number / 10 == 2) std::cout << "twenty ";
        else if (number / 10 == 3) std::cout << "thirty ";
        else if (number / 10 == 4) std::cout << "forty ";
        else if (number / 10 == 5) std::cout << "fifty ";
        else if (number / 10 == 6) std::cout << "sixty ";
        else if (number / 10 == 7) std::cout << "seventy ";
        else if (number / 10 == 8) std::cout << "eighty ";
        else if (number / 10 == 9) std::cout << "ninety ";

        number %= 10;
    }

    // Define how to print numbers from 1 to 19
    if (number > 0) {
        if (number == 1) std::cout << "one";
        else if (number == 2) std::cout << "two";
        else if (number == 3) std::cout << "three";
        else if (number == 4) std::cout << "four";
        else if (number == 5) std::cout << "five";
        else if (number == 6) std::cout << "six";
        else if (number == 7) std::cout << "seven";
        else if (number == 8) std::cout << "eight";
        else if (number == 9) std::cout << "nine";
        else if (number == 10) std::cout << "ten";
        else if (number == 11) std::cout << "eleven";
        else if (number == 12) std::cout << "twelve";
        else if (number == 13) std::cout << "thirteen";
        else if (number == 14) std::cout << "fourteen";
        else if (number == 15) std::cout << "fifteen";
        else if (number == 16) std::cout << "sixteen";
        else if (number == 17) std::cout << "seventeen";
        else if (number == 18) std::cout << "eighteen";
        else if (number == 19) std::cout << "nineteen";
    }

    // Print a new line
    std::cout << std::endl;

    // End the program
    return 0;
}
