#include <iostream>

int main() {
    int x = 10;  // First integer variable
    int y = 20;  // Second integer variable

    // Perform relational operations
    bool isEqual = (x == y);        // Check if x is equal to y
    bool isNotEqual = (x != y);     // Check if x is not equal to y
    bool isGreater = (x > y);       // Check if x is greater than y
    bool isLess = (x < y);          // Check if x is less than y

    // Output results
    std::cout << "x == y: " << (isEqual ? "True" : "False") << std::endl;       // Print if x equals y
    std::cout << "x != y: " << (isNotEqual ? "True" : "False") << std::endl;    // Print if x does not equal y
    std::cout << "x > y: " << (isGreater ? "True" : "False") << std::endl;      // Print if x is greater than y
    std::cout << "x < y: " << (isLess ? "True" : "False") << std::endl;         // Print if x is less than y

    return 0;
}
