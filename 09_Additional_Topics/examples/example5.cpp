#include <iostream>
#include <vector>
#include <string>

int main() {
    // Defining a vector of strings
    std::vector<std::string> names = { "Alice", "Bob", "Charlie" };

    // Adding a new name to the vector
    names.push_back("David");

    // Printing the vector
    for (const std::string& name : names) {
        std::cout << name << " ";
    }

    return 0;
}
