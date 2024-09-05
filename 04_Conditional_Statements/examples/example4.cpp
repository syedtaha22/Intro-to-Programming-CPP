/*
    Program to print the day of the week based on the number entered by the user.
*/

// include the iostream library
#include <iostream>

// main function
int main() {
    // declare a variable to store the day
    int day;
    // ask the user to enter a number for the day of the week
    std::cout << "Enter a number (1-7) for the day of the week: ";
    // read the number from the user
    std::cin >> day;

    // check the number entered by the user and print the corresponding day of the week
    switch (day) {
        // if the number is 1, print Monday
    case 1:
        std::cout << "Monday" << std::endl;
        break;
        // if the number is 2, print Tuesday
    case 2:
        std::cout << "Tuesday" << std::endl;
        break;
        // if the number is 3, print Wednesday
    case 3:
        std::cout << "Wednesday" << std::endl;
        break;
        // if the number is 4, print Thursday
    case 4:
        std::cout << "Thursday" << std::endl;
        break;
        // if the number is 5, print Friday
    case 5:
        std::cout << "Friday" << std::endl;
        break;
        // if the number is 6, print Saturday
    case 6:
        std::cout << "Saturday" << std::endl;
        break;
        // if the number is 7, print Sunday
    case 7:
        std::cout << "Sunday" << std::endl;
        break;
        // if the number is not between 1 and 7, print Invalid day
    default:
        std::cout << "Invalid day." << std::endl;
    }

    // return 0 to indicate that the program has run successfully
    return 0;
}
