#include <iostream>

int main() {

    int* ptr = new int; // Allocate memory for an integer
    *ptr = 42; // Assign a value

    std::cout << "Value: " << *ptr << '\n';

    delete ptr; // Free memory
    ptr = nullptr; // Nullify the pointer

    return 0;
}
