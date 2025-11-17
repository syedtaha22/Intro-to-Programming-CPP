// Return Address Conditionally
#include <iostream>

int* isGreater(int& a, int& b) {
    return (a > b) ? &a : nullptr;
}

void check(int a, int b) {
    // Creates a local copy of a, and b
    // Passes this copy to isGreater  which will
    // return the address of a or nullptr
    // In case of nullptr the expression evalutates to 
    // false.
    if (isGreater(a, b))
        std::cout << a << " is greater than " << b << std::endl;
    else
        std::cout << a << " is not greater than " << b << std::endl;
}

int main() {

    int a = 4;
    int b = 5;

    check(5, 6); // Call check. 
    check(3, 2); // Call check

    return 0; // For success
}