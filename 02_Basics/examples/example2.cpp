#include <iostream>

int main() {
    int a = 10;  // First integer variable
    int b = 5;   // Second integer variable

    // Perform arithmetic operations
    int sum = a + b;            // Addition
    int difference = a - b;     // Subtraction
    int product = a * b;        // Multiplication
    int quotient = a / b;       // Division
    int remainder = a % b;      // Modulus (remainder of division)

    // Output results
    std::cout << "Sum: " << sum << std::endl;              // Print sum
    std::cout << "Difference: " << difference << std::endl; // Print difference
    std::cout << "Product: " << product << std::endl;       // Print product
    std::cout << "Quotient: " << quotient << std::endl;     // Print quotient
    std::cout << "Remainder: " << remainder << std::endl;   // Print remainder

    return 0;
}
