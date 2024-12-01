#include <iostream>

int main() {
    int rows = 3, cols = 3;
    int** matrix = new int* [rows]; // Allocate rows

    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols]; // Allocate columns for each row
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = i * j; // Assign values
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << '\n';
    }

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i]; // Deallocate each row
        matrix[i] = nullptr; // Nullify the pointer of each row
    }
    delete[] matrix; // Deallocate the main array
    matrix = nullptr; // Nullify the pointer of the main array

    return 0;
}
