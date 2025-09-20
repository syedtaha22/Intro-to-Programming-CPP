/********************************************************************************************
 * @file    task4.cpp
 *
 * @brief   In machine learning, a perceptron is one of the simplest models of an artificial
 *          neuron. It takes an input, multiplies it by a weight, adds a bias, and produces
 *          an output. Although modern neural networks use more advanced structures, the
 *          perceptron is important because it forms the foundation of how learning systems
 *          adjust weights to minimize errors.
 *
 *          Training a perceptron involves making guesses, comparing them with the correct
 *          outputs, calculating the error (called loss), and then adjusting the weight and
 *          bias to improve accuracy. This process is repeated until the error becomes very
 *          small.
 *
 *          In this task, we will simulate the training of a perceptron to approximate a
 *          simple quadratic function:
 *              f(x) = 2x^2 + 3x - 4
 *
 * @details Write a C++ program that simulates the training process of a perceptron to fit
 *          the function above.
 *
 *          Steps to Solve the Problem:
 *              1.	Initialize the Weights and Biases: Choose arbitrary starting values for
 *                  w (weight) and b (bias).
 *              2.	Define the Target Point: Pick a fixed input, for example, x = 3, and
 *                  compute the true function value:
 *                      f(3) = 2*(3^2) + 3*3 - 4 = 23
 *              3.	Perceptron’s Guess: Use the formula:
 *                      y = w * x + b
 *                  to calculate the predicted value.
 *              4.	Calculate the Loss: Measure the error(loss) with
 *                      loss = f(x) - y
 *                  The smaller the loss, the closer the guess is to the true value.
 *              5.	Update the Weights and Biases: Adjust using:
 *                      w = w + α * loss * x
 *                      b = b + α * loss
 *                  where α is the learning rate (e.g., 0.01).
 *              6.	Repeat Until Loss is Small: Continue the process until the loss falls
 *                  below a small threshold (e.g., 0.001).
 *
 ********************************************************************************************/

#include <iostream>
#include <cmath>

int main() {

    double w = 0.3;
    double b = 0.6;
    double alpha = 0.01; // Learning rate
    double epsilon = 0.00005; // Threshold for stopping criterion

    // Choose a random point for training
    double x = 3.0;
    // Calculate the target value using the function f(x) = 2*x^2 + 3*x - 4
    double target = 2 * x * x + 3 * x - 4;

    // Display the initial values
    std::cout << "Starting training with initial w: " << w << ", b: " << b << std::endl;
    std::cout << "Target point: (" << x << ", f(" << x << ") = " << target << ")" << std::endl;

    // Ask the user if they are ready to start the training
    std::cout << "Press Enter to start training." << std::endl;
    std::cin.get(); // Wait for user input

    // Train the perceptron
    int epoch = 0;
    double loss;

    do {

        epoch++;
        double y = w * x + b; // Perceptron's guess
        loss = target - y; // Calculate the loss
        w = w + alpha * loss * x; // Update the weight
        b = b + alpha * loss; // Update the bias

        // Display the results for this epoch
        std::cout << "\nEpoch " << epoch << ":" << std::endl;
        std::cout << "Perceptron guess: y = " << y << std::endl;
        std::cout << "Loss: " << loss << std::endl;
        std::cout << "Updated w: " << w << ", b: " << b << std::endl;

    } while (fabs(loss) >= epsilon); // Continue until the loss is small enough

    /**
     * fabs() is used to get the absolute value of the loss. The 'f' in 'fabs'
     * indicates that the function works with floating-point numbers abs() is
     * used for integer values. Using abs with floating-point numbers can lead
     * to errors due to truncation.
     */

    double y_test = w * x + b;  // Get the new value of y after training
    loss = target - y_test;     // Final Loss

    // Display the final weight and bias
    std::cout << "\nTraining finished after " << epoch << " epochs." << std::endl;
    std::cout << "Final y: " << y_test << std::endl;
    std::cout << "Target value: " << target << std::endl;
    std::cout << "Final Loss: " << loss << std::endl;

    std::cout << "Final w: " << w << ", b: " << b << std::endl;
    std::cout << "Perceptron learned the correct function!" << std::endl;

    // Return 0 to indicate successful completion
    return 0;

}