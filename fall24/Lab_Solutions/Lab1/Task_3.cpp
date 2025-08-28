/*
    [Question 3]
    Write a program that demonstrates the use of `\r` (carriage return) by first printing "Processing..." and then overwriting it with "Completed!" on the same line.

    Output Workflow:
    1. Print "Processing...".
    2. Use `\r` to move the cursor to the beginning of the line.
    3. Print "Completed!" to overwrite "Processing...".

    Expected final output:
    Completed!

*/

// Preprocessor Directives
#include <iostream>

// Main Function
int main() {

    // Print "Processing..."
    std::cout << "Processing...\rCompleted!";

    // Add three new lines for spacing
    std::cout << "\n\n\n";

    // Return 0 to indicate successful completion
    return 0;
}
