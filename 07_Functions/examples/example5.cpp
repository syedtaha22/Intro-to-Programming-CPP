#include <iostream>

// Function to modify an integer using a pointer
void modifyValue(int* ptr) {
    *ptr = 20;  // Dereferencing the pointer to modify the original value
}

int main() {
    int num = 10;
    std::cout << "Before: " << num << std::endl;
    modifyValue(&num);  // Pass the address of num
    std::cout << "After: " << num << std::endl;
    return 0;
}
