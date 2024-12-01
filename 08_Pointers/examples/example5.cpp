#include <iostream>

// Recursive Function that swaps the elements of an array
void swap(int* start, int* end) {
    // Base case
    if (start >= end) return;

    // Swap the elements
    int temp = *start;
    *start = *end;
    *end = temp;

    // Recursive
    swap(start + 1, end - 1);
}

int main() {
    int n = 5; // Number of elements
    int* arr = new int[n]; // Create a dynamic array of n elements
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // Assign values
    }

    // Swap the elements of the array
    int* start = arr;
    int* end = arr + n - 1;
    swap(start, end);

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';

    delete[] arr; // Free memory
    arr = nullptr; // Nullify the pointer
    return 0;
}
