// Initialize a variable via pointer

#include <iostream>

void init(int* p) {
    *p = 123; // Set the value at the address pointed to by p
}

int main() {
    int value = 0; // Declare an integer variable
    std::cout << "Before init: " << value << std::endl;

    init(&value); // Pass the address of value to the init function

    std::cout << "After init: " << value << std::endl;

    return 0;
}