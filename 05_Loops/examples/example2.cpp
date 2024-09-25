/********************************************************
 *  Example 2:
 *      Loop to calculate the sum of first n natural numbers.
**********************************************************/

// include the iostream library
#include <iostream>

// main function
int main() {
    // variable to store the sum, and the maximum number
    int n, sum = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;

    // loop through numbers from 1 to n
    for (int i = 1; i <= n; ++i) {
        // add the number to the sum
        sum += i;
    }
    // print the sum
    std::cout << "Sum of first " << n << " numbers is: " << sum << std::endl;
    // return 0 to indicate that the program has run successfully
    return 0;
}
