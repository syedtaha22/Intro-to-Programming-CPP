#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <limits>

int main() {
    double weight = 0.0;
    double bias = 0.0;

    // Get Learned Parameters from User
    std::cout << "--- Perceptron Generalization Test ---\n";
    std::cout << "Please enter the learned weight parameter (w) from your training run: ";
    if (!(std::cin >> weight)) {
        std::cerr << "Invalid weight input. Exiting.\n";
        return 1;
    }

    std::cout << "Please enter the learned bias parameter (b) from your training run: ";
    if (!(std::cin >> bias)) {
        std::cerr << "Invalid bias input. Exiting.\n";
        return 1;
    }

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "\nLoaded Model: y = " << weight << " * x + " << bias << "\n";
    std::cout << "Target Function: t = 2x^2 - 4\n";
    std::cout << "--------------------------------------\n";

    std::vector<int> inputs;
    const int NUM_TESTS = 10;
    int correct_count = 0;

    // Get Ten Test Inputs from User
    std::cout << "Please enter " << NUM_TESTS << " integer values for x:\n";
    for (int i = 0; i < NUM_TESTS; ++i) {
        int x_in;
        std::cout << "Input x[" << i + 1 << "/" << NUM_TESTS << "]: ";

        // Simple input validation loop
        while (!(std::cin >> x_in)) {
            std::cout << "Invalid input. Please enter an integer: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        inputs.push_back(x_in);
    }
    std::cout << "\n";

    // Run Predictions and Display Results
    std::cout << std::setw(5) << "x" << std::setw(12) << "Pred"
        << std::setw(12) << "True"
        << std::setw(10) << "Error"
        << std::setw(12) << "Status"
        << std::endl;
    std::cout << "---------------------------------------------------------\n";

    for (size_t i = 0; i < inputs.size(); ++i) {
        int x = inputs[i];

        // Compute the perceptron's linear prediction (y = w * x + b)
        double prediction = weight * x + bias;

        // Compute the true target from the quadratic function (t = 2x^2 - 4)
        // This calculation is now in main() as requested.
        double target = 2.0 * x * x - 4.0;

        // Calculate the absolute error
        double abs_error = std::abs(prediction - target);

        // Check for correctness (|y_i - t_i| <= 1.0)
        bool is_correct = abs_error <= 1.0;

        if (is_correct) {
            correct_count++;
        }

        // Print results for the current test point
        std::cout << std::setw(5) << x
            << std::setw(12) << prediction
            << std::setw(12) << target
            << std::setw(10) << abs_error
            << std::setw(12) << (is_correct ? "CORRECT" : "INCORRECT")
            << std::endl;
    }

    // Calculate and Print Accuracy
    double accuracy_percent = (static_cast<double>(correct_count) / NUM_TESTS) * 100.0;

    std::cout << "\n=========================================================\n";
    std::cout << "Total Correct Predictions: " << correct_count << "/" << NUM_TESTS << "\n";
    std::cout << "Overall Accuracy = " << std::setprecision(2) << accuracy_percent << "%\n";
    std::cout << "=========================================================\n";

    return 0;
}
