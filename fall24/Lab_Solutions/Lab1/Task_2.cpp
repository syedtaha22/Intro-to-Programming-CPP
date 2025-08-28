/*
    [Question 2]
    Write a program that displays the following table with proper alignment using `\t`:

    Product     Price       Quantity
    Bread       $1.50       20
    Milk        $0.99       50
    Eggs        $2.99       12

    Make sure the columns are aligned using tabs.

*/

// Preprocessor Directives
#include <iostream>

// Main Function
int main() {
    // Added two new Lines for spacing
    std::cout << "\n\n";

    // Print the formatted table
    std::cout << "Product\t\tPrice\t\tQuantity\nBread\t\t$1.50\t\t20\nMilk\t\t$0.99\t\t50\nEggs\t\t$2.99\t\t12";

    // Added two new Lines for spacing
    std::cout << "\n\n";

    // Return 0 to indicate successful completion
    return 0;
}
