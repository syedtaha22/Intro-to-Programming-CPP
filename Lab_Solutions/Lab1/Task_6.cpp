/*
    [Question 6]
    Write a program that demonstrates the use of `\n`, `\t`, and `\r`.
    The program should:
    - Print a simple receipt with item names, prices, and quantities in a tabular format using `\t`.
    - Use `\n` to move between lines.
    - Use `\r` to overwrite a temporary price ($00.00) with a total price ($17.00) on the same line.

    Output Workflow:
    1)	Print the table header:
            •	"Item    Quantity    Price"
    2)	Print each item with quantity and price:
            •	"Apples    5   $10.00"
            •	"Bananas   7   $7.00"
    3)	Print a temporary total price:
            •	"Total: $00.00"
    4)	Use `\r` to return to the beginning of the line and overwrite the temporary total price with the final total price:
            •	"Total: $17.00"


    Expected final output:
    Item        Quantity    Price
    Apples      5           $10.00
    Bananas     7           $7.00
    Total: $17.00
*/

// Preprocessor Directives
#include <iostream>

// Main Function
int main() {
    std::cout << "\n\n"; // Add two new lines for spacing


    // Print the table header
    std::cout << "Item\t\tQuantity\tPrice\n";

    // Print items
    std::cout << "Apples\t\t5\t\t$10.00\n";
    std::cout << "Bananas\t\t7\t\t$7.00\n";

    // Print temporary total message
    std::cout << "Total: $00.00";

    // Use \r to overwrite the temporary price
    std::cout << "\rTotal: $17.00\n";

    std::cout << "\n\n"; // Add two new lines for spacing

    // Return 0 to indicate successful completion
    return 0;
}
