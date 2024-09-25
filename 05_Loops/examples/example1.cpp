/****************************************************
 *  Example 1:
 *      Loop to print prime numbers between 1 and 100.
*****************************************************/

// include the iostream library
#include <iostream>

// main function
int main() {

    // loop through numbers from 1 to 100
    for (int num = 1; num <= 100;num++) {
        // flag to check if the number is prime
        bool isPrime = true;

        // check if the number is prime
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                // if the number is divisible by any number other than 1 and itself,
                // it is not prime, so set the flag to false and break the loop
                isPrime = false;
                break;
            }
        }

        // if the number is prime, print it
        if (isPrime) std::cout << num << " ";
    }

    // return 0 to indicate that the program has run successfully
    return 0;
}
