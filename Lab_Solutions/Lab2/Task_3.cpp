/*
    [Question 3]:
    Write a program that requests the user's name as input and then asks for their year of birth.
    Display a message that includes their name and age, like:

        Hello [Name], you are [Age] years old.

    Hint: Use std::string type variable to take input for name. You need to include string library
    by adding the following line before main function:
        #include <string>
*/

// Include iostream library
#include <iostream>
// Include string library
#include <string> // Required for string data type

int main() {
    // Declare string variable to store user's name
    std::string name;
    // Declare integer variable to store user's year of birth
    int yearOfBirth;

    // Ask user to enter their name
    std::cout << "Enter your name: ";
    // Store user's name in name variable
    getline(std::cin, name);

    // Ask user to enter their year of birth
    std::cout << "Enter your year of birth: ";
    // Store user's year of birth in yearOfBirth variable
    std::cin >> yearOfBirth;

    // Calculate user's age
    int age = 2024 - yearOfBirth;

    // Display user's name and age
    std::cout << "Hello " << name << ", you are " << age << " years old." << std::endl;

    return 0; // Return 0 to indicate successful completion
}

