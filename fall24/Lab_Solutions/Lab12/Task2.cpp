/*
    Task 2:
        Define a struct Student with fields for name (string), age (int), and GPA (float).
        Dynamically allocate an array of 5 Student structs. Input the details for each student
        and print them.
*/


// Include the necessary libraries
#include <iostream>
#include <string>

// Define the Student struct
struct Student {
    std::string name; // Name of the student
    int age; // Age of the student
    float gpa; // GPA of the student
};


int main() {
    // Dynamically allocate an array of 5 Student structs
    Student* students = new Student[5];

    // Manually Enter student details
    students[0] = { "Ahmed", 20, 3.5 };
    students[1] = { "Ali", 21, 3.6 };
    students[2] = { "Asad", 22, 3.7 };
    students[3] = { "Ahsan", 23, 3.8 };
    students[4] = { "Adeel", 24, 3.9 };

    // Print student details
    std::cout << "Name\tAge\tGPA" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << students[i].name << "\t" << students[i].age << "\t" << students[i].gpa;
        std::cout << std::endl;
    }

    delete[] students; // Free memory
    students = nullptr; // Reset pointer

    return 0; // Return 0 to indicate successful completion
}