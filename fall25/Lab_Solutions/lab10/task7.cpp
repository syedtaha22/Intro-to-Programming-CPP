// Memory Addresses in Functions and Recursion
#include <iostream>


void foo(int x) {
    // Print the address of the parameter 'x'
    std::cout << "Address of x in foo: " << &x << std::endl;
}

void bar(int& x) {
    // Print the address of the parameter 'x'
    std::cout << "Address of x in bar: " << &x << std::endl;
}

void fooRec(int x) {
    if (x <= 0) return;
    std::cout << "Address of x in fooRec (x=" << x << "): " << &x << std::endl;
    fooRec(x - 1);
}

void barRec(int& x) {
    if (x <= 0) return;
    std::cout << "Address of x in barRec (x=" << x << "): " << &x << std::endl;
    barRec(--x); // Pre-decrement original x 
}

int main() {
    int x = 10;

    std::cout << "In main, address of x: " << &x << std::endl;

    foo(x);
    bar(x);

    // Recursive pass of x by value
    std::cout << "Recursive calls passing x by value:" << std::endl;
    fooRec(x);

    // Recursive pass of x by reference
    std::cout << "Recursive calls passing x by reference:" << std::endl;
    barRec(x);

    // Observation:
    // When passing by value, each recursive call has its own copy of x with a different address.
    // When passing by reference, all recursive calls refer to the same x in main, so
    // the address remains the same.
    // Same goes for foo and bar functions.

    return 0;
}
