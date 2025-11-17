// Sum of array via pointer
#include <iostream>

int sum(int* arr, int size) {
    int total = 0;
    for (int i = 0; i < size; ++i) {
        total += *(arr + i); // Access each element using pointer arithmetic
    }
    return total;
}

int main() {
    const int SIZE = 5;
    int numbers[SIZE] = { 1, 2, 3, 4, 5 };

    int total = sum(numbers, SIZE); // Pass the array to the sum function

    std::cout << "Sum of array elements: " << total << std::endl;

    return 0;
}