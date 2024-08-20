#include <iostream>

int main() {
    // Declare and initialize variables
    int age = 25;          // Integer variable for age
    float height = 5.9f;   // Floating-point variable for height
    char initial = 'S';    // Character variable for initial
    bool isStudent = true; // Boolean variable indicating if the person is a student

    // Output variable values
    std::cout << "Age: " << age << std::endl;                               // Print age
    std::cout << "Height: " << height << std::endl;                         // Print height
    std::cout << "Initial: " << initial << std::endl;                       // Print initial
    std::cout << "Is Student: " << (isStudent ? "Yes" : "No") << std::endl; // Print if student

    return 0;
}
