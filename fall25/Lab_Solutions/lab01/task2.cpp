/************************************************************************************************
 * Task 2:
 * Write a program that demonstrates the use of `\r` (carriage return) by first printing "CCC"
 * and then overwriting it with "BB" on the same line.
 * Finally, overwrite "BB" with "A".
 *
 * Output Workflow:
 *  1. Print "CCC".
 *  2. Use `\r` to move the cursor to the beginning of the line.
 *  3. Print "BB" to overwrite "CCC".
 *  4. Use `\r` to move the cursor to the beginning of the line.
 *  5. Print "A".
 *
 * Expected final output:
 * ABC
 ************************************************************************************************/

#include <iostream> // Preprocessor Directives

int main() {

    std::cout << "CCC\rBB\rA\n"; // Print "CCC", then overwrite with "BB", then overwrite with "A"

    // Return 0 to indicate successful completion
    return 0;
}
