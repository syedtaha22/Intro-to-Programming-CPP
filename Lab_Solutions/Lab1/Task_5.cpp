/*
    [Question 5]
    Write a program that demonstrates the use of both `\n` and `\r`.

    Output Workflow:
    •	Print "Downloading...".
    •	Use `\r` to move the cursor to the beginning of the line.
    •	Print "Download Complete!" to overwrite "Downloading...".
    •	Print “Done” in a newline

    Expected final output:
        Download Complete!
        Done
*/

// Preprocessor Directives
#include <iostream>

// Main Function
int main() {

    // Print "Downloading..."
    std::cout << "Downloading...\rDownload Complete!\nDone";

    // Add three new lines for spacing
    std::cout << "\n\n\n";

    // Return 0 to indicate successful completion
    return 0;
}
