/*
    Task 1:
        You are tasked with designing an Employee Leave Record System. Each employee has the following
        details:
            • Name
            • Employee ID
            • Leaves Taken
            • Leaves Remaining
        Write a program that:
            1.  Dynamically allocates memory for an array of employees based on user input for the number of
                employees.
            2.  Allows the user to update the number of leaves taken by an employee. The program should
                automatically adjust the Leaves Remaining field.
            3.  Provides a function to find and display the employee with the most leaves remaining.
            4.  Displays the complete employee list, including their leave details, using a function.

        Example Input(input can be given on separate line as well):

            Enter the number of employees: 3
            Employee 1: John, ID: 101, Leaves Taken: 2, Leaves Remaining: 10
            Employee 2: Mary, ID: 102, Leaves Taken: 3, Leaves Remaining: 9
            Employee 3: Alice, ID: 103, Leaves Taken: 5, Leaves Remaining: 7

        Example Output:

            Employee with the most leaves remaining: John (10 leaves remaining)

        Submission: Employee.cpp
*/

// Include the necessary libraries
#include <iostream>
#include <string>


// Structure to represent an Employee
struct Employee {
    std::string name;
    int id;
    int leavesTaken;
    int leavesRemaining;

    // Default constructor
    Employee() {
        name = "";
        id = 0;
        leavesTaken = 0;
        leavesRemaining = 0;
    }

    // Constructor to initialize the Employee
    Employee(std::string name, int id, int leavesTaken, int leavesRemaining) {
        this->name = name;
        this->id = id;
        this->leavesTaken = leavesTaken;
        this->leavesRemaining = leavesRemaining;
    }

    // Function to update the leaves taken by an employee
    void updateLeaves(int newLeaves) {
        leavesTaken += newLeaves;
        leavesRemaining -= newLeaves;
    }

    // Overload the << operator to display the employee details
    friend std::ostream& operator<<(std::ostream& os, const Employee& employee) {
        os << "Employee: " << employee.name << ", ID: " << employee.id
            << ", Leaves Taken: " << employee.leavesTaken << ", Leaves Remaining: " << employee.leavesRemaining;
        return os;
    }

};


// Function to find the employee with the most leaves remaining
Employee* findEmployeeWithMostLeavesRemaining(Employee* employees, int n) {
    Employee* employeeWithMostLeaves = &employees[0]; // Assume the first employee has the most leaves remaining
    // For each employee
    for (int i = 1; i < n; i++) {
        // If the current employee has more leaves remaining than the employee with the most leaves
        if (employees[i].leavesRemaining > employeeWithMostLeaves->leavesRemaining) {
            // Update the employee with the most leaves
            employeeWithMostLeaves = &employees[i];
        }
    }
    // Return the employee with the most leaves remaining
    return employeeWithMostLeaves;
}

// Function to display the list of employees
void displayEmployees(Employee* employees, int n) {
    std::cout << "Employee List:" << std::endl;
    // For each employee, display their details
    for (int i = 0; i < n; i++) std::cout << employees[i] << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of employees: ";
    std::cin >> n;

    // Dynamically allocate memory for an array of employees
    Employee* employees = new Employee[n];

    // For each employee, input their details
    for (int i = 0; i < n; i++) {
        std::string name;
        int id, leavesTaken, leavesRemaining;
        std::cout << "Employee " << i + 1 << ": ";
        std::cin >> name >> id >> leavesTaken >> leavesRemaining;
        employees[i] = Employee(name, id, leavesTaken, leavesRemaining);
    }

    // Update the leaves taken by an employee
    int employeeIndex, newLeaves;
    std::cout << "Enter the index of the employee to update leaves taken: ";
    std::cin >> employeeIndex;
    std::cout << "Enter the number of new leaves taken: ";
    std::cin >> newLeaves;
    employees[employeeIndex].updateLeaves(newLeaves);

    // Find and display the employee with the most leaves remaining
    Employee* employeeWithMostLeaves = findEmployeeWithMostLeavesRemaining(employees, n);
    std::cout << "Employee with the most leaves remaining: " << *employeeWithMostLeaves << std::endl;

    // Display the list of employees
    displayEmployees(employees, n);

    // Free the dynamically allocated memory
    delete[] employees;

    return 0;
}