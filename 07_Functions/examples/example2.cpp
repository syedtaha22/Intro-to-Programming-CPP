#include <iostream>

// Function that checks if a number is even or odd
std::string checkEvenOdd(int num) {
    if (num % 2 == 0) {
        return "Even";
    }
    else {
        return "Odd";
    }
}

int main() {
    int number = 17;
    std::cout << "The number " << number << " is " << checkEvenOdd(number) << "." << std::endl;
    return 0;
}
