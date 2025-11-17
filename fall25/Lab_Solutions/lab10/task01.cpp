// Array of Pointers and integers
#include <iostream>
#define SIZE 5

int main() {

    int ints[SIZE] = { 10, 20, 30, 40, 50 };
    int* ptrs[SIZE];

    for (int i = 0; i < SIZE; ++i)
        // Assign address of each integer to the corresponding pointer
        // in the array of pointers
        ptrs[i] = &ints[i];

    // In memory:
    // Memory 0x0 0x4 0x8 0xC 0x10
    // Values 10  20  30  40  50
    // 
    // Memory 0x14 0x1C 0x24 0x2C 0x34
    // Values 0x0  0x4  0x8  0xC  0x10

    std::cout << "Values using array of pointers:" << std::endl;
    for (int i = 0; i < SIZE; ++i)
        // Dereference each pointer to get the integer value
        std::cout << ptrs[i][0] << " "; // or *(ptrs[i])

    return 0;
}


