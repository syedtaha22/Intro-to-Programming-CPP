/*********************************************************************************************
 * @file    task4.cpp
 *
 * @brief   In many software systems, users have different access rights, such as the
 *          ability to read, write, or execute files. Each permission can either be
 *          enabled or disabled. Efficiently representing and checking these permissions
 *          is important in operating systems, file managers, and security applications.
 *
 * @details Write a C++ program that:
 *              - Prompts the user to enter a number between 0 and 7 representing the
 *               current permissions. The number is interpreted in binary as follows:
 *                      Number	Binary	Permission
 *                        0	     000	No permissions
 *                        1	     001	Execute
 *                        2	     010	Write
 *                        3	     011	Execute + Write
 *                        4	     100	Read
 *                        5	     101	Read + Execute
 *                        6	     110	Read + Write
 *                        7	     111	Read + Write + Execute
 *              - Prints the status of each permission (True for enabled, False for
 *                disabled) based on the entered number.
 *              - Prompts the user to enter a new toggle mask (a number between 0 and 7).
 *                Each bit in this number indicates which permissions to toggle: if a bit
 *                is set, the corresponding permission flips; otherwise it remains unchanged.
 *              - Calculates the new permission states and prints them.
 *
 *          Hint: Think in terms of bitwise operations to determine and toggle permissions.
 ********************************************************************************************/

#include <iostream>

int main() {
    int permissions, toggleMask;

    const int READ = 4;     // 100 in binary
    const int WRITE = 2;    // 010 in binary
    const int EXEC = 1;     // 001 in binary

    // Prompt user for current permissions
    std::cout << "Enter current permissions (0-7): ";
    std::cin >> permissions;


    std::cout << "\nCurrent Permissions:" << std::endl;
    std::cout << "Read  :\t" << (permissions & READ ? "True" : "False") << std::endl;
    std::cout << "Write :\t" << (permissions & WRITE ? "True" : "False") << std::endl;
    std::cout << "Exec  :\t" << (permissions & EXEC ? "True" : "False") << std::endl;

    // Prompt user for toggle mask
    std::cout << "\nEnter toggle mask (0-7): ";
    std::cin >> toggleMask;

    // Calculate new permissions by toggling
    permissions = permissions ^ toggleMask;

    std::cout << "\nNew Permissions after toggling:" << std::endl;
    std::cout << "Read  :\t" << (permissions & READ ? "True" : "False") << std::endl;
    std::cout << "Write :\t" << (permissions & WRITE ? "True" : "False") << std::endl;
    std::cout << "Exec  :\t" << (permissions & EXEC ? "True" : "False") << std::endl;

    return 0;
}