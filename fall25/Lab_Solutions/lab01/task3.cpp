/*******************************************************************
 * Task 3:
 *  Write a program that demonstrates the use of both \n and \r.
 *
 *  Output Workflow:
 *      - Print "Processing File...".
 *      - Use \r to move the cursor to the beginning of the line.
 *      - Print "Processing Complete!" to overwrite "Processing File...".
 *      - Print "Done" in a newline.
 *
 *  Expected final output:
 *      Processing Complete!
 *      Done
********************************************************************/
#include <iostream>

int main() {

    // Print the required output
    std::cout << "Processing File...\rProcessing Complete!\nDone\n";

    // Return 0 to indicate successful completion
    return 0;
}