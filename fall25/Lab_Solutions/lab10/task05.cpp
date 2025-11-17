// Dangling Pointer

#include <iostream>

void dangle(int*& p) {
    int local = 2;
    p = &local; // p now points to a local variable
    // local goes out of scope when dangle returns
    // p becomes a dangling pointer: it points to invalid memory
}

int main() {
    int init = 42;
    int* ptr = &init; // ptr points to a valid integer

    std::cout << "Initial value: " << *ptr << " (at address " << ptr << ")\n";
    dangle(ptr); // Call function that makes ptr a dangling pointer

    // Dereferencing ptr here is unsafe and leads to undefined behavior
    // The next line may cause a crash or unpredictable results
    std::cout << "After dangle: value " << *ptr << " (at address " << ptr << ")\n";

    return 0;
}