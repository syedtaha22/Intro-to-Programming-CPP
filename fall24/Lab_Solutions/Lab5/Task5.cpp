/*
    Task 6:
    Write a C++ program that guesses a number the user has in mind in the range 0 to 100. The user
    provides feedback after each guess:
        - Enter 'l' if the guess is too low.
        - Enter 'h' if the guess is too high.
        - Enter 'y' if the guess is correct.
    The program should use the following approach:
        1) Start by defining the range in which the number lies. In this case, it’s from 0 to 100.
        2) Divide this range in half to find the middle value.
        3) Use the middle value as the computer’s guess.
        4) Based on the user's feedback, modify the range to narrow down the possible numbers.
           Consider how the feedback ('l' or 'h') should influence your guess and which part of
           the range can be eliminated.
        5) Continue repeating this process until the correct number is found.

*/

// Include the iostream library
#include <iostream>

// main function
int main() {
    // Declare variables to store the range of numbers
    int start = 0;
    int end = 100;
    // Declare a variable to store the midpoint
    int midpoint;
    // Declare a variable to store the user's feedback
    char feedback;

    // Ask the user to think of a number between 0 and 100
    std::cout << "Think of a number between 0 and 100." << std::endl;
    // Ask the use if they are ready to start the game
    std::cout << "Press Enter when you are ready to start." << std::endl;
    // Wait for the user to press Enter
    std::cin.get();

    // Use a do-while loop to repeatedly guess the number
    do {
        // Calculate the midpoint of the range
        midpoint = (start + end) / 2;
        // Display the computer's guess
        std::cout << "Is your number " << midpoint << "? (Enter 'l' if too low, 'h' if too high, 'y' if correct): ";
        // Store the user's feedback
        std::cin >> feedback;

        // Adjust the range based on the user's feedback
        if (feedback == 'l') {
            // Adjust the starting point of the range
            start = midpoint + 1;
        }
        else if (feedback == 'h') {
            // Adjust the ending point of the range
            end = midpoint - 1;
        }

    } while (feedback != 'y');

    // Display a congratulatory message when the correct number is found
    std::cout << "Congratulations! I guessed your number." << std::endl;

    // return 0 to indicate the program executed successfully
    return 0;
}