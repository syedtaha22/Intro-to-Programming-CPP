/*
    Task 5:
        Create a struct DynamicArray with fields size, capacity, and data (pointer to
        a dynamically allocated array of integers). Implement functions to initialize,
        resize, add elements, and display the array. The array should start with an
        initial capacity of 2, and the capacity should double every time it gets full.

        Test the functions by creating and modifying a DynamicArray.
*/

#include <iostream>

// Struct to represent a dynamic array
struct DynamicArray {
    int size; // Number of elements in the array
    int capacity; // Capacity of the array
    int* data; // Pointer to the dynamically allocated array

    // Function to initialize the array
    void init() {
        size = 0; // Set size to 0
        capacity = 2; // Set capacity to 2
        data = new int[capacity]; // Allocate memory for the array
    }

    // Function to resize the array
    void resize(int newCapacity) {
        std::cout << "Resizing array from " << capacity << " to " << newCapacity << std::endl;
        int* newData = new int[newCapacity]; // Allocate memory for the new array
        for (int i = 0; i < size; ++i) {
            newData[i] = data[i]; // Copy elements to the new array
        }
        delete[] data; // Free memory of the old array
        data = newData; // Update the pointer
        capacity = newCapacity; // Update the capacity
    }

    // Function to add an element to the array
    void add(int value) {
        std::cout << "Adding " << value << " to the array" << std::endl;
        if (size == capacity) {
            std::cout << "Not enough space for " << value << ". ";
            resize(capacity * 2); // Double the capacity
        }
        data[size++] = value; // Add the value and increment the size
    }

    // Function to display the array
    void display() {
        for (int i = 0; i < size; ++i) {
            std::cout << data[i] << " "; // Print each element
        }
        std::cout << std::endl;
    }

    // Function to free memory
    void free() {
        delete[] data; // Free memory
        data = nullptr; // Reset pointer
    }
};

int main() {
    DynamicArray arr; // Create a dynamic array
    arr.init(); // Initialize the array

    // Ask the user for the number of elements to add
    int elementsToAdd;
    std::cout << "Enter the number of elements to add: ";
    std::cin >> elementsToAdd;

    // Add elements to the array
    for (int i = 1;i <= elementsToAdd; i++) arr.add(i);

    // Display the array
    arr.display();

    // Free memory
    arr.free();

    return 0; // Return 0 to indicate successful completion
}