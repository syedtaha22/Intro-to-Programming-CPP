// One pointer to traverse an array
#include <iostream>

#define SIZE 5

int main() {

    int ints[SIZE] = { 10, 20, 30, 40, 50 };
    int* ptr = ints; // Pointer to the first element of the array

    for (int i = 0; i < SIZE; ++i)
        // Access each integer using pointer arithmetic
        std::cout << *(ptr + i) << " "; // or ptr[i]

    return 0;
}