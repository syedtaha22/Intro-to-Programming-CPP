/*
    Task 5:
        Create a game where the user rolls a dice 10 times. Each time, the dice randomly generates a number between 1 and 6. Based on the number rolled, the program gives the player feedback using a switch case.
        Feedback for Rolls:
            - If the number is 1, tell the player they need to roll better.
            - If the number is 6, congratulate them on rolling the highest number.
            - For all other numbers, print a message telling them the number they rolled.

        Use a `for` loop and 'switch' statement to implement the game.
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

    // Use a for loop to roll the dice 10 times
    for (int i = 0; i < 10; i++) {
        // Generate a random number between 1 and 6
        int roll = rand() % 6 + 1;

        // Print the roll number
        std::cout << "Roll " << i + 1 << ": " << roll << " - ";

        // Use a switch statement to provide feedback based on the roll
        switch (roll) {
        case 1:
            std::cout << "You need to roll better." << std::endl;
            break;
        case 6:
            std::cout << "Congratulations! You rolled the highest number." << std::endl;
            break;
        default:
            std::cout << "You rolled " << roll << "." << std::endl;
            break;
        }
    }

    // return 0 to indicate the program executed successfully
    return 0;
}