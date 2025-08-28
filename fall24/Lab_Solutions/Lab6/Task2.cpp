/***************************************************
 * Task 2: Left and Right Rotation of an Array
 *
 * Write a C++ program that allows the user to input an array of 10 integers. Then, ask
 * the user if they want to rotate the array to the left or right. Rotate the array
 * accordingly by 2 positions and print the result.
 *
 * What Does It Mean to Rotate an Array?
 * - Left Rotation: Shifting all elements of the array to the left, with the first
 *   element moving to the end. For example, if the array is [1, 2, 3, 4, 5],
 *   after a left rotation by 2 positions, it becomes [3, 4, 5, 1, 2].
 * - Right Rotation: Shifting all elements of the array to the right, with the last
 *   element moving to the front. For example, if the array is [1, 2, 3, 4, 5],
 *   after a right rotation by 2 positions, it becomes [4, 5, 1, 2, 3].
****************************************************/

// Include the iostream library
#include <iostream>

// Main function
int main() {
    // Declare an array to store 10 integers
    int numbers[10];

    // Prompt the user to enter 10 integers
    std::cout << "Enter 10 integers: ";

    // Read the 10 integers from the user
    for (int i = 0; i < 10; i++) {
        // Read the input number
        std::cin >> numbers[i];
    }

    // Declare a variable to store the user's choice
    char choice;

    // Prompt the user to choose left or right rotation
    std::cout << "Do you want to rotate the array to the left or right(L/R)?: ";
    std::cin >> choice;

    // Perform left rotation
    if (tolower(choice) == 'l') {
        // Store the first two elements
        int temp1 = numbers[0];
        int temp2 = numbers[1];

        // Shift the elements to the left
        for (int i = 0; i < 8; i++) {
            numbers[i] = numbers[i + 2];
        }

        // Place the stored elements at the end
        numbers[8] = temp1;
        numbers[9] = temp2;
    }
    // Perform right rotation
    else if (tolower(choice) == 'r') {
        // Store the last two elements
        int temp1 = numbers[8];
        int temp2 = numbers[9];

        // Shift the elements to the right
        for (int i = 9; i > 1; i--) {
            numbers[i] = numbers[i - 2];
        }

        // Place the stored elements at the beginning
        numbers[0] = temp1;
        numbers[1] = temp2;
    }
    // Invalid choice
    else {
        // Display an error message and exit the program
        std::cerr << "Error: Invalid choice. Please enter 'L' or 'R'." << std::endl;
        return 1;
    }

    // Display the rotated array
    std::cout << "Rotated array: ";
    for (int i = 0; i < 10; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Return 0 to indicate successful completion
    return 0;
}
