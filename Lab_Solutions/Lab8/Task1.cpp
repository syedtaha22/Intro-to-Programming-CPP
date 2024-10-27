/*
    Task 1:
        Create a function “calculator” that takes two integers and an operator (+, -, *, /)
        and returns the result of the operation. This function should perform the operation
        based on the operator pass as input. For division, ensure the function checks for division
        by zero and returns an appropriate error message or value if the second operand is zero.
*/


// Include the iostream library
#include <iostream>

// Function to perform arithmetic operations on two operands
double calculator(double operand1, double operand2, char op) {
    // Perform the operation based on the operator
    switch (op) {
        // Addition
    case '+': return operand1 + operand2; break;
        // Subtraction
    case '-': return operand1 - operand2; break;
        // Multiplication
    case '*': return operand1 * operand2; break;
        // Division
    case '/':
        // Check for division by zero
        if (operand2 == 0) {
            // Display an error message and return 0
            std::cout << "Error: Division by zero is not allowed." << std::endl;
            return 0;
        }
        // Otherwise, perform the division
        return operand1 / operand2;
        break;
        // Invalid operator
    default:
        // Display an error message and return 0
        std::cout << "Error: Invalid operator." << std::endl;
        return 0;
    }
}

int main() {
    // Declare variables to store the operands and operator
    double operand1, operand2;
    char op; // Operator

    // Prompt the user to enter the expression, op1 op op2
    std::cout << "Enter the Expression (operand1 operator operand2): ";
    std::cin >> operand1 >> op >> operand2; // Read the expression

    // Calculate and display the result of the operation
    double result = calculator(operand1, operand2, op); // Calculate the result
    std::cout << "Result: " << result << std::endl;

    // Return 0 to indicate successful completion
    return 0;
}