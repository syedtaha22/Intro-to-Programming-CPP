/*
    Task 3:
        Write a program random_walkers.cpp that takes two inputs n and trials. In each of trials
        independent experiments, simulate a random walk of n steps and compute the squared distance.
        Output the mean squared distance (the average of the trials squared distances).

        ```
            % random_walkers.exe                    % random_walkers.exe
            Enter n and trials: 100 10000           Enter n and trials: 400 2000
            mean squared distance = 101.446         mean squared distance = 383.12

            % random_walkers.exe                    % random_walkers.exe
            Enter n and trials: 100 10000           Enter n and trials: 800 5000
            mean squared distance = 99.1674         mean squared distance = 811.8264

            % random_walkers.exe                    % random_walkers.exe
            Enter n and trials: 200 1000            Enter n and trials: 1600 100000
            mean squared distance = 195.75          mean squared distance = 1600.13064
        ```

        As n increases, we expect the random walk to end up farther and farther away from the origin.
        But how much farther? Use random_walkers.cpp to formulate a hypothesis as to how the mean
        squared distance grows as a function of n. Use trials = 100000 to get a suficiently accurate
        estimate.
*/

// Include the iostream library
#include <iostream>
// Include the random library
#include <random> 
// Include the ctime library
#include <ctime> 

// The main function
int main() {
    // Declare variables to store the number of steps and the number of trials
    int n, trials;
    // Ask the user to enter the number of steps and the number of trials
    std::cout << "Enter n and trials: ";
    // Read the number of steps and the number of trials
    std::cin >> n >> trials;

    // Seed the random number generator
    std::srand(std::time(0));

    // Initialize the total squared distance
    double total_squared_distance = 0.0;

    // Perform the specified number of trials
    for (int t = 0; t < trials; t++) {
        int x = 0, y = 0;  // Start at the origin

        // Simulate a random walk of n steps
        for (int i = 0; i < n; i++) {
            int direction = std::rand() % 4;  // Random direction: 0 = north, 1 = east, 2 = south, 3 = west

            // Move the drone in the selected direction
            switch (direction) {
            case 0: y++; break;  // Move north
            case 1: x++; break;  // Move east
            case 2: y--; break;  // Move south
            case 3: x--; break;  // Move west
            }
        }

        // Calculate the squared Euclidean distance from the origin for this trial
        int squared_distance = x * x + y * y;
        // Add the squared distance to the total
        total_squared_distance += squared_distance;
    }

    // Calculate and print the mean squared distance
    double mean_squared_distance = total_squared_distance / trials;
    std::cout << "mean squared distance = " << mean_squared_distance << std::endl;

    return 0;
}
