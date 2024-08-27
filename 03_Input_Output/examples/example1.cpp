/*
    This program takes a users name and age and prints it out.
*/

// Include the iostream library
#include<iostream>

// main function
int main() {
    std::string name; // String to store the users name
    int age; // Integer to store the users age

    std::cout << "What is your name? "; // Ask the user for their name
    std::cin >> name; // Take in the users name and store it in the name variable

    std::cout << "What is your age? "; // Ask the user for their age
    std::cin >> age; // Take in the users age and store it in the age variable

    // Print out the users name and age
    // Prints : "Hello <name>, you are <age> years old."
    std::cout << "Hello " << name << ", you are " << age << " years old." << std::endl;

    return 0; // Return 0 to indicate the program ran successfully
}

