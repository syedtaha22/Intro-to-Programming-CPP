/*
    Task 1:
        Create a struct named Circle to represent a circle. The struct should
        include a data member radius of type double and member functions:
            - area(): to calculate and return the area of the circle,
            - circumference(): to calculate and return the circumference, and
            - display(): to print the radius, area, and circumference in a readable format.

        In the program, create an instance of the Circle struct(assign a radius of choice), compute the
        area and circumference using the member functions, and display the results using the display() function.
*/

// Include the iostream library
#include <iostream>



// Structure to represent a circle
struct Circle {
    const double PI = 3.14159; // Value of pi
    double radius; // Radius of the circle

    // Function to calculate the area of the circle
    double area() {
        return PI * radius * radius;
    }

    // Function to calculate the circumference of the circle
    double circumference() {
        return 2 * PI * radius;
    }

    void display() {
        std::cout << "Radius: " << radius << std::endl;
        std::cout << "Area: " << area() << std::endl;
        std::cout << "Circumference: " << circumference() << std::endl;
    }
};

int main() {
    Circle c; // Create an instance of the Circle struct
    c.radius = 5.0; // Assign a radius of 5.0
    c.display(); // Display the radius, area, and circumference
    return 0;
}
