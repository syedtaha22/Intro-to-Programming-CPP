/*
    Task 2:
    A drone's flight. A drone begins flying aimlessly, starting at IBA Student Center. At
    each time step, the drone flies one meter in a random direction, either north, east, south, or west, with
    probability 25%. How far will the drone be from Student Center after n steps? This process is known
    as a two-dimensional random walk 1.

    (a) Write a program random_walker.cpp that takes an integer n as input and simulates the motion of
    a random walk for n steps. Print the location at each step (including the starting point), treating
    the starting point as the origin (0, 0). Also, print the square of the final Euclidean distance from
    the origin.

        ```
        % random_walker.exe
        Enter n: 10
        (0, 0)
        (0, -1)
        (0, 0)
        (0, 1)
        (0, 2)
        (-1, 2)
        (-2, 2)
        (-2, 1)
        (-1, 1)
        (-2, 1)
        (-3, 1)
        squared distance = 10 (-3, 2)
        ```

        ```
        % random_walker.exe
        Enter n: 20
        (0, 0)
        (0, 1)
        (-1, 1)
        (-1, 2)
        (0, 2)
        (1, 2)
        (1, 3)
        (0, 3)
        (-1, 3)
        (-2, 3)
        (-3, 3)
        (-4, 2)
        (-4, 1)
        (-3, 1)
        (-3, 0)
        (-4, 0)
        (-4, -1)
        (-3, -1)
        (-3, -2)
        (-3, -3)
        squared distance = 18
        ```
*/

// Include the iostream library
#include <iostream>
// Include the random library
#include <random> 
// Include the ctime library
#include <ctime> 

// The main function
int main() {
    // Declare a variable to store the number of steps
    int n;
    // Ask the user to enter the number of steps
    std::cout << "Enter n: ";
    // Read the number of steps
    std::cin >> n;

    // Initialize starting point at the origin (0, 0)
    int x = 0, y = 0;

    // Seed the random number generator with the current time
    std::srand(std::time(0));

    // Print the starting point
    std::cout << "(" << x << ", " << y << ")" << std::endl;

    // Simulate the random walk
    for (int i = 0; i < n; i++) {
        int direction = std::rand() % 4;  // Generate a random direction: 0 = north, 1 = east, 2 = south, 3 = west

        // Move the drone in the selected direction
        switch (direction) {
        case 0: y++; break;  // Move north
        case 1: x++; break;  // Move east
        case 2: y--; break;  // Move south
        case 3: x--; break;  // Move west
        }

        // Print the current location after each step
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }

    // Calculate the square of the Euclidean distance from the origin
    int squared_distance = (x * x) + (y * y);

    // Print the squared distance
    std::cout << "squared distance = " << squared_distance << std::endl;

    // Exit the program
    return 0;
}
