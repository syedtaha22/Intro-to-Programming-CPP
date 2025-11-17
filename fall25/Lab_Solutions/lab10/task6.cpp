// Pointer Dereferencing Behavior

#include <iostream>

int main() {
    int value = 100;

    // Attempt to dereference value (which is not a pointer)
    // This will cause a compilation error
    // std::cout << *value << std::endl;

    int arr[3] = { 1, 2, 3 };

    // Attempt to dereference arr (which decays to a pointer to its first element)
    std::cout << *arr << std::endl; // This is valid and prints 1

    // Conclusion:
    // Dereferencing a non-pointer type (like 'value') is invalid and causes a compilation error.
    // Dereferencing an array name (like 'arr') is valid as it decays to a pointer to its first element.

    return 0;
}