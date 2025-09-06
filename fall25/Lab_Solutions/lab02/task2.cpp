/******************************************************************************
 * @file    task2.cpp
 *
 * @details Write a program that requests the user’s fullname as input and
 *          then asks for their age. Display a message that includes their
 *          name and age.
 *****************************************************************************/

#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    // Prompt user for their full name
    std::cout << "Enter your full name: ";
    std::getline(std::cin, name);

    // Prompt user for their age
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Display the message with the user's name and age
    std::cout << "\nHello " << name << ", you are " << age << " years old." << std::endl;

    return 0;
}