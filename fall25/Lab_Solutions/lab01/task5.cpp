/*****************************************************************************
 * Task 5:
 *
 *  Write a program that assigns values to 4 variables and displays a message
 *  using those variables. The program should:
 *      - Contain 4 variables: name, erp, section, course
 *      - Store relevant info in these variables
 *      - Use cout to display the message
 ******************************************************************************/

#include <iostream> 

int main() {
    // Declare and initialize variables
    std::string name = "Ahmed Ali";
    int erp = 12345;
    int section = 99564;
    std::string course = "BSCS";

    std::cout << "My name is " << name << std::endl; // Print name
    std::cout << "My ERP is " << erp << std::endl; // Print ERP
    std::cout << "I am in section " << section << std::endl; // Print section
    std::cout << "I am enrolled in " << course << std::endl; // Print course

    // Return 0 to indicate successful completion
    return 0;
}