#include <iostream>

int main() {
    int arr[3] = { 10, 20, 30 };
    int* ptr = arr; // Pointer to the first element

    for (int i = 0; i < 3; i++) {
        std::cout << "Value: " << *ptr << ", Address: " << ptr << '\n';
        ptr++; // Move to the next element
    }
    return 0;
}
