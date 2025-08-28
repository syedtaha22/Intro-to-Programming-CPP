/*
    Task 2
        Create a struct Matrix with fields for rows, cols, and data (pointer to a dynamically
        allocated 2D array). Write a program to dynamically allocate a matrix based on user
        input for rows and columns. Fill it with random values and display it.
*/

// Include the necessary libraries
#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime> // For time()
#include <iomanip> // For setw()

// Struct to represent a matrix
struct Matrix {
    int rows; // Number of rows
    int cols; // Number of columns
    int** data; // Pointer to 2D array
};

// Function to dynamically allocate a matrix based on user input
Matrix* createMatrix(int rows, int cols) {
    Matrix* matrix = new Matrix; // Allocate memory for matrix

    matrix->rows = rows; // Set number of rows
    matrix->cols = cols; // Set number of columns

    // Allocate memory for 2D array
    matrix->data = new int* [matrix->rows]; // Allocate memory for rows
    for (int i = 0; i < matrix->rows; ++i) {
        matrix->data[i] = new int[matrix->cols]; // Allocate memory for columns
    }

    // Fill matrix with random values
    for (int i = 0; i < matrix->rows; ++i) {
        for (int j = 0; j < matrix->cols; ++j) {
            matrix->data[i][j] = rand() % 100; // Random value between 0 and 99
        }
    }

    return matrix; // Return the matrix
}

// Function to display a matrix
void displayMatrix(const Matrix* matrix) {
    // Display matrix
    for (int i = 0; i < matrix->rows; ++i) {
        for (int j = 0; j < matrix->cols; ++j) {
            std::cout << std::setw(2) << std::setfill('0') << matrix->data[i][j] << " ";
        }
        std::cout << std::endl;
    }

}


int main() {
    srand(time(0)); // Seed the random number generator

    int rows, cols; // Number of rows and columns
    std::cout << "Enter number of rows and columns: ";
    std::cin >> rows >> cols; // Read number of rows and columns

    Matrix* matrix = createMatrix(rows, cols); // Create a matrix
    displayMatrix(matrix); // Display the matrix

    // Free memory
    for (int i = 0; i < matrix->rows; ++i) {
        delete[] matrix->data[i]; // Free memory for columns
    }

    delete[] matrix->data; // Free memory for rows
    delete matrix; // Free memory for matrix

    return 0;
}

