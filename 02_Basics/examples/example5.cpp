#include <iostream>

int main() {
    int count = 10;  // Integer variable for counting

    // Perform increment and decrement operation

    // Post-increment: 
    // 1. Store the current value of count in postIncrement
    // 2. Increment count by 1 
    // Count is now 11, but postIncrement is 10
    int postIncrement = count++;

    // Pre-increment: 
    // 1. Increment count by 1
    // 2. Store the new value of count in preIncrement
    // Count is now 12, and preIncrement is 12
    int preIncrement = ++count;

    // Post-decrement:
    // 1. Store the current value of count in postDecrement
    // 2. Decrement count by 1
    // Count is now 11, but postDecrement is 12
    int postDecrement = count--; // Store post-decrement value

    // Pre-decrement:
    // 1. Decrement count by 1
    // 2. Store the new value of count in preDecrement
    // Count is now 10, and preDecrement is 10
    int preDecrement = --count;  // Store pre-decrement value

    // Output results
    std::cout << "Post-increment: " << postIncrement << std::endl;  // Print value after post-increment
    std::cout << "Pre-increment: " << preIncrement << std::endl;    // Print value after pre-increment
    std::cout << "Post-decrement: " << postDecrement << std::endl;  // Print value after post-decrement
    std::cout << "Pre-decrement: " << preDecrement << std::endl;    // Print value after pre-decrement

    return 0;
}
