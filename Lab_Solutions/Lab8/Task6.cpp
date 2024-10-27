/*
    Task 6:
        Write a function `maxOfThree` that takes three integers as input and
        returns the maximum of these values. The function should compare the
        values and return the largest one. Ask the user to enter three numbers
        and display the maximum value returned by the function.
*/

// Include the iostream library
#include <iostream>


// Function to find the maximum of three numbers
int maxOfThree(int num1, int num2, int num3) {
    // Compare the three numbers and return the maximum
    if (num1 >= num2 && num1 >= num3) {
        return num1;
    }
    else if (num2 >= num1 && num2 >= num3) {
        return num2;
    }
    else {
        return num3;
    }
}

// Main function
int main() {
    // Declare variables to store the three numbers
    int num1, num2, num3;

    // Prompt the user to enter three numbers
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    // Find and display the maximum of the three numbers
    std::cout << "Maximum of the three numbers is: " << maxOfThree(num1, num2, num3) << std::endl;

    // Return 0 to indicate successful completion
    return 0;
}