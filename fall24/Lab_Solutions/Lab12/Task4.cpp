/*
    Task 4:
        Define a struct Point that represents a point in a 2D space with x and y coordinates
        (both doubles).

        Include the following member functions within the struct:
        1.	A function distanceFromOrigin() to calculate and return the distance of the point
            from the origin (0,0)(0, 0).
        2.	A function translate(double dx, double dy) to shift the point by adding dx to x
            and dy to y.
        3.  A function print() to print the coordinates of the point in the format (x, y).

        In the main function, create an array of 5 points, initialize their coordinates, and
        demonstrate the use of the member functions for each point.
*/

// Include the necessary libraries
#include <iostream>
#include <cmath>

// Define the Point struct
struct Point {
    double x, y; // x and y coordinates of the point

    // Function to calculate the distance of the point from the origin
    double distanceFromOrigin() { return sqrt(x * x + y * y); }

    // Function to translate the point by dx and dy
    void translate(double dx, double dy) { x += dx; y += dy; }

    // Function to print the coordinates of the point
    void print() { std::cout << "(" << x << ", " << y << ")"; }
};

int main() {
    // Create an array of 5 points
    Point points[5] = {
        {1.0, 2.0},
        {3.0, 4.0},
        {5.0, -6.0},
        {7.0, 8.0},
        {9.0, 10.0}
    };

    // Demonstrate the use of member functions for each point
    for (int i = 0; i < 5; ++i) {
        std::cout << "\nPoint " << i + 1 << ": "; points[i].print(); std::cout << std::endl;
        std::cout << "Distance from origin: " << points[i].distanceFromOrigin() << std::endl;
        points[i].translate(1.0, 1.0); // Translate by (1, 1)
        std::cout << "After translation: "; points[i].print(); std::cout << std::endl;

    }

    return 0; // Return 0 to indicate successful completion
}