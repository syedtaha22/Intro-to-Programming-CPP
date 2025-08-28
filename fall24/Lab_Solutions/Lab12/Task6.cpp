/*
    Task 6:
        Define a struct Polynomial with fields degree (int) and coefficients (pointer to a
        dynamically allocated array of doubles). Write a program to dynamically allocate a
        polynomial, input its degree and coefficients, and evaluate it for a given value of x.

        You Program should make use of the following functions
            - Polynomial getRandomPolynomial(int degree);
                - Initializes a random polynomial of given degree

        Member Functions:
            - double evaluate(double x);
                - Evaluates the polynomial at x

            - void print();
                - Prints the polynomial

*/

#include <iostream>
#include <ctime>
#include <random>

// Struct to represent a polynomial
struct Polynomial {
    int degree; // Degree of the polynomial
    double* coefficients; // Pointer to an array of coefficients

    Polynomial(int d) : degree(d) {
        // Allocate memory for coefficients
        coefficients = new double[degree + 1]; // +1 for the constant term
    }

    // Destructor to free memory
    ~Polynomial() {
        delete[] coefficients; // Free memory
    }

    // Function to evaluate the polynomial for a given value of x
    double evaluate(double x) {
        double result = 0; // Result of the polynomial
        double xPower = 1; // x^0 = 1
        for (int i = 0; i <= degree; ++i) {
            result += coefficients[i] * xPower; // Add the term to the result
            xPower *= x; // Update xPower
        }
        return result; // Return the result
    }

    void print() {
        // Print the polynomial
        std::cout << "Polynomial: ";
        for (int i = degree; i > 0; --i) {
            std::cout << coefficients[i] << "x";
            if (i > 1) std::cout << "^" << i;
            if (i > 0) std::cout << " + ";

        }
        std::cout << coefficients[0]; // Print the constant term
        std::cout << std::endl;
    }
};

// Function to dynamically allocate a polynomial based on user input
Polynomial getRandomPolynomial(int degree) {
    Polynomial poly(degree); // Create a polynomial with the given degree

    // Fill the coefficients with random values
    for (int i = 0; i <= degree; ++i) {
        // coefficients can be double values between 0 to 9
        poly.coefficients[i] = rand() % 10 + (rand() % 100) / 100.0;
    }

    return poly; // Return the polynomial
}

int main() {
    srand(time(0)); // Seed the random number generator

    int degree; // Degree of the polynomial
    std::cout << "Enter the degree of the polynomial: ";
    std::cin >> degree; // Read the degree

    Polynomial poly = getRandomPolynomial(degree); // Create a polynomial
    poly.print(); // Print the polynomial

    double x; // Value of x
    std::cout << "Enter the value of x: ";
    std::cin >> x; // Read the value of x

    std::cout << "Result: " << poly.evaluate(x) << std::endl; // Evaluate the polynomial

    return 0;

}