/****************************************************************************
 * @file    fractions.cpp
 *
 * @brief   Write a program that implements arithmetic operations
 *          on fractions.
 *
 * @details The program should do the following:
 *              - Input two fractions from the user (numerator and denominator for each).
 *              - Ask the user to choose which operation to perform on the fractions
 *                  (addition, subtraction, multiplication, or division).
 *              - Display the result of the chosen operation in simplified form.
 *
 *          Sample runs:
 *              Enter numerator and denominator of first fraction: 3 4
 *              Enter numerator and denominator of second fraction: 5 6
 *              Choose operation (+, -, *, /): +
 *              Result: 19/12
 *
 *              Enter numerator and denominator of first fraction: 2 3
 *              Enter numerator and denominator of second fraction: 4 5
 *              Choose operation (+, -, *, /): -
 *              Result: -2/15
 ***************************************************************************/

#include <iostream>

int main() {
    int n1, d1, n2, d2;
    char op;

    std::cout << "Enter numerator and denominator of first fraction: ";
    if (!(std::cin >> n1 >> d1)) {
        std::cout << "Error: invalid input.\n";
        return 1;
    }
    if (d1 == 0) {
        std::cout << "Error: denominator of first fraction is zero.\n";
        return 1;
    }

    std::cout << "Enter numerator and denominator of second fraction: ";
    if (!(std::cin >> n2 >> d2)) {
        std::cout << "Error: invalid input.\n";
        return 1;
    }
    if (d2 == 0) {
        std::cout << "Error: denominator of second fraction is zero.\n";
        return 1;
    }

    std::cout << "Choose operation (+, -, *, /): ";
    if (!(std::cin >> op)) {
        std::cout << "Error: invalid input.\n";
        return 1;
    }

    int res_num = 0, res_den = 1;

    if (op == '+') {
        res_num = n1 * d2 + n2 * d1;
        res_den = d1 * d2;
    }
    else if (op == '-') {
        res_num = n1 * d2 - n2 * d1;
        res_den = d1 * d2;
    }
    else if (op == '*') {
        res_num = n1 * n2;
        res_den = d1 * d2;
    }
    else if (op == '/') {
        if (n2 == 0) {
            std::cout << "Error: division by zero (second fraction numerator is zero).\n";
            return 1;
        }
        res_num = n1 * d2;
        res_den = d1 * n2;
    }
    else {
        std::cout << "Error: invalid operation.\n";
        return 1;
    }

    if (res_den == 0) {
        std::cout << "Error: result has zero denominator.\n";
        return 1;
    }

    // Simplify result
    if (res_den < 0) {
        res_num = -res_num;
        res_den = -res_den;
    }

    int a = abs(res_num), b = abs(res_den);
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    int g = a;
    if (g != 0) {
        res_num /= g;
        res_den /= g;
    }

    std::cout << "Result: " << res_num << "/" << res_den << std::endl;

    return 0;
}
