/*
    [Task 6]:
    The two roots of a quadratic equation can be obtained using the following formula:


    where b² −4ac is called the discriminant of the quadratic equation. If it is positive, the equation has two real roots. If it is zero, the equation has one root. If it is negative, the equation has no real roots.
    Write a program that prompts the user to enter values for a, b, and c and displays the result based on the discriminant.
    1.	If the discriminant is positive, display two roots.
    2.	If the discriminant is 0, display one root.
    3.	Otherwise, display “The equation has no real roots.”

*/

// Include the iostream library
#include <iostream>
// Include the cmath library for the sqrt function
#include <cmath>

// main function
int main() {
    // Declare variables to store the user's input
    double a, b, c, discriminant, root1, root2;

    // Display a message to the user
    std::cout << "Enter the coefficients of the quadratic equation (a, b, c): ";
    // Store the user's input
    std::cin >> a >> b >> c;

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check the value of the discriminant
    if (discriminant > 0) {
        // Calculate the roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        // Display the roots
        std::cout << "The equation has two real roots: " << root1 << " and " << root2 << std::endl;
    }
    else if (discriminant == 0) {
        // Calculate the root
        root1 = -b / (2 * a);

        // Display the root
        std::cout << "The equation has one real root: " << root1 << std::endl;
    }
    else {
        // Display a message indicating no real roots
        std::cout << "The equation has no real roots." << std::endl;
    }

    // return 0 to indicate the program executed successfully
    return 0;
}