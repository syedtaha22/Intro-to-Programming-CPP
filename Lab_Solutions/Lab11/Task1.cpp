/*
    Task 1:
        Create a function allocateAndPrint() that dynamically allocates memory for an
        integer, takes user input to assign a value, prints the value, and then frees
        the memory.
*/

// Include the required libraries
#include <iostream>

// Function to allocate memory for an integer, take user input, print the value, and free the memory
void allocateAndPrint() {
    int* ptr = new int;  // Dynamically allocate memory for an integer

    // Take user input to assign a value
    std::cout << "Enter an integer: ";
    std::cin >> *ptr;

    // Print the value
    std::cout << "The value is: " << *ptr << std::endl;

    delete ptr;  // Free the allocated memory
    ptr = nullptr;  // Set the pointer to nullptr after freeing the memory
}

int main() {
    // Call allocateAndPrint to demonstrate dynamic memory allocation
    allocateAndPrint();
    return 0;
}