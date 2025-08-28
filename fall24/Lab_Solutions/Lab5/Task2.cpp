/*
    Task 2: Simulate Training of a Single Perceptron
        Write a C++ program that simulates the training of a single perceptron to fit a simple quadratic function:
                    `f(x) = 2x^2 - 4`.

        Explanation of How the Guessing Works:
            A perceptron tries to guess the output based on the equation:
                    `y = w * x + b`

            where `w` is the weight and `b` is the bias. Initially, both `w` and `b` are random numbers.

            The program will calculate the output `y` of the perceptron for a specific point `x`,
            and compare it to the correct value using the function `f(x) = 2x^2 - 4`.

            Steps to Solve the Problem:
            1)	Initialize the Weights and Biases: Randomly generate initial values for `w` (weight)
                and `b` (bias).
            2)	Define the Target Point: Choose a random point, for example, `x = 3`, and calculate
                the actual function value: `f(3) = 2 * 3^2 - 4 = 14`
            3)	Perceptron’s Guess: The perceptron will guess the output value `y` based on its
                current weight and bias using: `y = w * 3 + b`
            4)	Calculate the Loss: Compute the loss (error) using the formula: `loss = f(3) - y`.
                The goal is to minimize this loss, ideally getting it as close to 0 as possible.
            5)	Update the Weights and Biases: In each iteration, adjust `w` and `b` using the following
                update rules:
                    •	`w = w + alpha * loss * x`
                    •	`b = b + alpha * loss`

                Here, `alpha` (learning rate) is a small constant like 0.01 that controls how much
                the weights and bias are adjusted.
            6)	Repeat Until Loss is Small: Keep repeating the process of calculating the guess,
                computing the loss, and adjusting `w` and `b` until the loss is less than a small value,
                such as 0.001.
*/

// Include the iostream library
#include <iostream>
// Include the random library
#include <random>

// The main function
int main() {
    srand(time(0));

    // Initialize the weight and bias with random values between -1 and 1
    double w = static_cast<double>(rand()) / RAND_MAX * 2 - 1;
    double b = static_cast<double>(rand()) / RAND_MAX * 2 - 1;
    double alpha = 0.01; // Learning rate


    // Choose a random point for training
    double x = 3.0;
    // Calculate the target value using the function f(x) = 2x^2 - 4
    double target = 2 * x * x - 4;

    // Display the initial values
    std::cout << "Starting training with initial w: " << w << ", b: " << b << std::endl;
    std::cout << "Target point: (" << x << ", f(" << x << ") = " << target << ")" << std::endl;

    // Ask the user if they are ready to start the training
    std::cout << "Press Enter to start training." << std::endl;
    std::cin.get();

    // Train the perceptron
    int epoch = 0;


    while (true) {
        // Calculate the perceptron's guess
        double y = w * x + b;
        // Calculate the loss
        double loss = target - y;

        // Update the weight and bias
        w = w + alpha * loss * x;
        b = b + alpha * loss;

        // Display the results for this epoch
        std::cout << "\nEpoch " << epoch + 1 << ":" << std::endl;
        std::cout << "Perceptron guess: y = " << y << std::endl;
        std::cout << "Loss: " << loss << std::endl;
        std::cout << "Updated w: " << w << ", b: " << b << std::endl;

        // Check if the loss is small enough
        if (loss < 0.001) {
            break;
        }

        // Increment the epoch counter
        epoch++;

    }

    // Get the new value of y after training
    double y_test = w * x + b;
    // Final Loss
    double loss = target - y_test;

    // Display the final weight and bias
    std::cout << "\nTraining finished after " << epoch << " epochs." << std::endl;
    std::cout << "Final y: " << y_test << std::endl;
    std::cout << "Final w: " << w << ", b: " << b << std::endl;
    std::cout << "Perceptron learned the correct function!" << std::endl;

    // Return 0 to indicate successful completion
    return 0;
}