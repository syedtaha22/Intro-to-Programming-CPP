/*
    [Task 1]:
    Write a Program that asks the user to Input a select a shape (Circle, Square, or Equilateral Triangle),
    then Calculates and Displays its Area, and Parameter.
*/

// Include the iostream library
#include <iostream>
// Include the cmath library
#include <cmath>
// Include the string library
#include <string>

// main function
int main() {
    // Declare a variable to store the user's choice
    int choice;
    const float PI = 3.14159; // Declare a constant variable for the value of pi

    // Display a menu for the user to select a shape
    std::cout << "1. Circle\n2. Square\n3. Equilateral Triangle\n";

    // add spacing
    std::cout << std::endl;

    // Ask the user to select a shape
    std::cout << "Select a shape (1-3): ";
    // Store the user's choice
    std::cin >> choice;

    // add spacing
    std::cout << std::endl;

    switch (choice) {
    case 1:
        float radius; // Declare a variable to store the radius of the circle
        float area; // Declare a variable to store the area of the circle
        float perimeter; // Declare a variable to store the perimeter of the circle


        // Ask the user to input the radius of the circle
        std::cout << "Enter the radius of the circle: ";
        // Store the user's input
        std::cin >> radius;

        // Calculate the area of the circle
        area = PI * pow(radius, 2);
        // Calculate the perimeter of the circle
        perimeter = 2 * PI * radius;

        // Display the area and perimeter of the circle
        std::cout << "Area: " << area << std::endl;
        std::cout << "Perimeter: " << perimeter << std::endl;
        break;
    case 2:
        float length; // Declare a variable to store the length of the triangle
        float areaSquare; // Declare a variable to store the area of the square
        float perimeterSquare; // Declare a variable to store the perimeter of the square

        // Ask the user to input the side of the square
        std::cout << "Enter the side of the square: ";
        // Store the user's input
        std::cin >> length;

        // Calculate the area of the square
        areaSquare = pow(length, 2);
        // Calculate the perimeter of the square
        perimeterSquare = 4 * length;

        // Display the area and perimeter of the square
        std::cout << "Area: " << areaSquare << std::endl;
        std::cout << "Perimeter: " << perimeterSquare << std::endl;
        break;
    case 3:
        float base; // Declare a variable to store the base of the triangle
        float height; // Declare a variable to store the height of the triangle
        float areaTriangle; // Declare a variable to store the area of the triangle
        float perimeterTriangle; // Declare a variable to store the perimeter of the triangle

        // Ask the user to input the base of the triangle
        std::cout << "Enter the base of the triangle: ";
        // Store the user's input
        std::cin >> base;

        // Calculate the height of the equilateral triangle
        height = sqrt(3) / 2 * base;

        // Calculate the area of the triangle
        areaTriangle = 0.5 * base * height;
        // Calculate the perimeter of the triangle
        perimeterTriangle = 3 * base;

        // Display the area and perimeter of the triangle
        std::cout << "Area: " << areaTriangle << std::endl;
        std::cout << "Perimeter: " << perimeterTriangle << std::endl;
        break;
    default:
        // Display an error message if the user enters an invalid choice
        std::cout << "Invalid choice!" << std::endl;
        break;
    }

    // Return 0 to indicate that the program has run successfully
    return 0;
}
