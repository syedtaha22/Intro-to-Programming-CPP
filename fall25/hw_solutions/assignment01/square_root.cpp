/****************************************************************************
 * @file    sqrt_bisection.cpp
 *
 * @brief   Write a program to find the square root of a positive number
 *          using the bisection method correct to two decimal places.
 *
 * @details The bisection method is a numerical method for finding the root of a
 *          function. To find the square root of a number N, define a function
 *          f(x) = x^2 - N. The root of this function (the value of x for which
 *          f(x) = 0) is the square root of N.
 *
 *          Steps:
 *              1. Choose interval [a, b] such that f(a) and f(b) have opposite signs.
 *                 For square root, set a = 0 and b = N (or b = 1 if N < 1).
 *              2. Compute midpoint m = (a + b) / 2 and evaluate f(m).
 *              3. If |f(m)| < tolerance (0.01 for two decimals), stop. m is approx root.
 *              4. If f(m) has same sign as f(a), set a = m, else set b = m.
 *              5. Repeat until desired accuracy.
 *
 *          Example: sqrt(25)
 *              Interval [0,25] → m = 12.5, f(12.5) positive. Root in [0,12.5].
 *              Keep narrowing until tolerance is met.
 ***************************************************************************/

#include <iostream>

int main() {
    double N;
    std::cout << "Enter a non-negative number: ";

    if (!(std::cin >> N)) {
        std::cout << "Error: invalid input.\n";
        return 1;
    }

    if (N < 0.0) {
        std::cout << "Error: number must not be negative.\n";
        return 1;
    }

    double a = 0.0;
    double b = (N < 1.0) ? 1.0 : N;
    double m = 0.0;
    const double tolerance = 0.01;

    while (true) {
        m = (a + b) / 2.0;
        double f = m * m - N;

        if (f >= -tolerance && f <= tolerance) break; // |f(m)| < tolerance

        double fa = a * a - N;

        /**
         * If f(m) and f(a) have the same sign, then f(m) * f(a) will
         * always be positive. This means the root lies in [m, b],
         * so we set a = m. Otherwise, the root lies in [a, m],
         * so we set b = m.
         */
        if (f * fa > 0.0) a = m;
        else b = m;
    }

    std::cout << "Square root of " << N << " is approximately " << m << std::endl;
    return 0;
}
