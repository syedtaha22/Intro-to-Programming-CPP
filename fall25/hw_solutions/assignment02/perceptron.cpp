#include <iostream>
#include <iomanip>
#include <cmath> // Needed for std::abs

int main() {
    double weight = 0.0;
    double bias = 0.0;
    double x = 3.0;
    double target = 14.0;
    double lr = 0.01;

    int step = 0;
    double error;

    do {
        double y = weight * x + bias;
        error = target - y;

        weight = weight + lr * error * x; // Update the weight parameter.
        bias = bias + lr * error; // Update the bias parameter.

        std::cout << "Step " << step << ": prediction = " << std::setprecision(7)
            << y << ", error = " << std::setprecision(7) << error << std::endl;
        step++;

    } while (std::abs(error) > 1e-6);

    double final_prediction = weight * x + bias;
    std::cout << "\nFinal prediction at x=3: " << std::setprecision(5) << final_prediction << std::endl;
    std::cout << "Target value: " << std::setprecision(5) << target << std::endl;
    std::cout << "Final weight = " << std::setprecision(5) << weight << ", bias = " << std::setprecision(5) << bias << std::endl;
    std::cout << "Total steps: " << step << std::endl;

    return 0;
}