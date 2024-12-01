#include <iostream>

int main() {
    int n = 5;
    int* arr = new int[n]; // Create a dynamic array

    for (int i = 0; i < n; i++)
        arr[i] = i * i; // Assign values

    for (int i = 0; i < n; i++)
        std::cout << "arr[" << i << "] = " << arr[i] << '\n';


    delete[] arr; // Free memory
    arr = nullptr; // Nullify the pointer

    return 0; // Exit
}
