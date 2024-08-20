#include <iostream>

int main() {
    bool a = true;   // First boolean variable
    bool b = false;  // Second boolean variable

    // Perform logical operations
    bool andResult = a && b;   // Logical AND: true if both a and b are true
    bool orResult = a || b;    // Logical OR: true if at least one of a or b is true
    bool notResult = !a;       // Logical NOT: inverts the value of a

    // Output results
    std::cout << "a && b: " << (andResult ? "True" : "False") << std::endl;  // Print result of a AND b
    std::cout << "a || b: " << (orResult ? "True" : "False") << std::endl;   // Print result of a OR b
    std::cout << "!a: " << (notResult ? "True" : "False") << std::endl;      // Print result of NOT a

    return 0;
}
