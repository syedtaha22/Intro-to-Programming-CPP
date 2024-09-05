/*
    Program to calculate the discount based on the product price and membership status.
*/

// include the iostream library
#include <iostream>

// main function
int main() {
    // declare a variable to store the product price
    double price;
    // declare a variable to store the membership status
    char member;

    // ask the user to enter the product price
    std::cout << "Enter the product price: ";
    // read the product price from the user
    std::cin >> price;

    // ask the user if they are a member
    std::cout << "Are you a member? (Y/N): ";
    // read the membership status from the user
    std::cin >> member;

    // if the user is a member
    if (member == 'Y' || member == 'y') {
        // and the price is greater than 100
        if (price > 100) {
            // print that they get a 20% discount
            std::cout << "You get a 20% discount!" << std::endl;
        }
        else {
            // otherwise, print that they get a 10% discount
            std::cout << "You get a 10% discount!" << std::endl;
        }
    } // otherwise
    else {
        // if the price is greater than 100
        if (price > 100) {
            // print that they get a 5% discount
            std::cout << "You get a 5% discount." << std::endl;
        }
        else {
            // otherwise, print that no discount is available
            std::cout << "No discount available." << std::endl;
        }
    }

    // return 0 to indicate that the program has run successfully
    return 0;
}
