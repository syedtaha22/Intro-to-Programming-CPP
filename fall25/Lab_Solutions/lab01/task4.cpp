/**************************************************************************************************************
 * Task 4:
 *  Write a program that demonstrates the use of `\n`, `\t`, and `\r`.
 *  The program should:
 *      - Print a student attendance sheet in a tabular format using `\t`.
 *      - Use `\n` to move between lines.
 *      - Use `\r` to overwrite a temporary status ("Updating...") with the final status ("Update Complete!")
 *        on the same line.
 *
 *  Output Workflow:
 *      1)  Print the table header:
 *            "Name        Roll No.    Status"
 *      2)  Print each student with roll number and attendance status:
 *            "Ali       101         Present"
 *            "Ahmed     102         Absent"
 *      3)  Print a temporary status message:
 *            "Updating..."
 *      4)  Use `\r` to return to the beginning of the line and overwrite the temporary message with the
 *          final one:
 *            "Update Complete!"
 *
 *  Expected final output:
 *      Name        Roll No.    Status
 *      Ali         101         Present
 *      Ahmed       102         Absent
 *      Update Complete!
 *************************************************************************************************************/


#include <iostream>

int main() {
    std::cout << "\n"; // Add a new line for spacing

    // Print the table header
    std::cout << "Name\t\tRoll No.\tStatus\n";

    // Print student details
    std::cout << "Ali\t\t101\t\tPresent\n";
    std::cout << "Ahmed\t\t102\t\tAbsent\n";

    // Print temporary status message
    std::cout << "\nUpdating...";

    // Use \r to overwrite the temporary message
    std::cout << "\rUpdate Complete!\n";

    return 0; // Return 0 to indicate successful completion
}