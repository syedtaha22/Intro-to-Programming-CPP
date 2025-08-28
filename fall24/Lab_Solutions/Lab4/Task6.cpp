/*
    Task 6:

    Create a simple number guessing game where the user has to guess a randomly chosen number
    between 1 and 5. The game provides feedback on the guess using a for loop.

    Instructions:
        1)	Game Setup: The program will randomly select a number between 1 and 5.
        2)	User Input: The user will have 3 attempts to guess the number.
        3)	Feedback: After each guess, provide feedback based on the user’s guess using a switch case:
                i)   If the guess is correct, print a congratulatory message and end the game.
                ii)  If the guess is incorrect, inform the user and let them try again.
                iii) If all attempts are used and the number is not guessed, reveal the number.

    Use a `for` loop to implement the game.
*/

// Include the iostream library
#include <iostream>
// Include the cstdlib library for the rand() and srand() functions
#include <cstdlib>
// Include the ctime library for the time() function
#include <ctime>

// main function
int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 5
    int secretNumber = rand() % 5 + 1;

    // Display a message to the user
    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "You have 3 attempts to guess the secret number between 1 and 5.\n" << std::endl;

    // Use a for loop to give the user 3 attempts
    for (int i = 0; i < 3; i++) {
        // Declare a variable to store the user's guess
        int guess;

        // Display a message to the user
        std::cout << "Attempt " << i + 1 << ", Enter your guess: ";
        // Store the user's input
        std::cin >> guess;

        // Check if the guess is correct
        if (guess == secretNumber) {
            // Set the text color to green
            std::cout << "\033[1;32m";
            // Print a congratulatory message
            std::cout << "Congratulations! You guessed the correct number.";
            // Reset the text color
            std::cout << "\033[0m" << std::endl;
            // return 0 to end the program
            return 0;
        }
        else {
            // Set the text color to red
            std::cout << "\033[1;31m";
            // Print an incorrect message
            std::cout << "Incorrect guess. Try again.\n" << std::endl;
            // Reset the text color
            std::cout << "\033[0m";
        }
    }

    // If all attempts are used and the number is not guessed, reveal the number
    std::cout << "The secret number was: " << secretNumber << std::endl;

    // return 0 to indicate the program executed successfully
    return 0;
}
