// Swapping two integers using pointers

#include <iostream>

void swap(int* a, int* b) {
    int temp = *a; // Store the value at address a in temp
    *a = *b;       // Assign the value at address b to the location at address a
    *b = temp;    // Assign the value in temp to the location at address b
}

int main() {
    int x = 5;
    int y = 10;

    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;

    swap(&x, &y); // Pass the addresses of x and y to the swap function

    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    return 0;
}