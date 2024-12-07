#include <iostream>
#include <string>
#include <vector>

// Function to check if a set of numbers is valid (1-9, no duplicates)
bool isValidSet(const std::vector<int>& nums) {
    int count[10] = { 0 }; // Array to count occurrences of digits 1-9
    // Iterate over the numbers
    for (int num : nums) {
        // If the number is not in the range [1, 9], return false
        if (num < 1 || num > 9) return false;
        // Increment the count of the number
        count[num]++;
        // If the number occurs more than once, return false
        if (count[num] > 1) return false;
    }
    return true;
}

// Function to extract a row from the grid
std::vector<int> getRow(std::vector<std::vector<int>>& grid, int rowIndex) {
    return grid[rowIndex];
}

// Function to extract a column from the grid
std::vector<int> getColumn(std::vector<std::vector<int>>& grid, int colIndex) {
    std::vector<int> column; // Column vector
    // Iterate over the rows and extract the column values
    for (int i = 0; i < grid.size(); ++i) column.push_back(grid[i][colIndex]);
    return column;
}

// Function to extract a 3x3 sub-grid
std::vector<int> getSubGrid(std::vector<std::vector<int>>& grid, int rowStart, int colStart) {
    std::vector<int> subGrid; // Sub-grid vector

    // Iterate over the sub-grid and extract the values
    for (int i = rowStart; i < rowStart + 3; ++i) {
        for (int j = colStart; j < colStart + 3; ++j) subGrid.push_back(grid[i][j]);
    }
    return subGrid;
}

// Function to validate the entire Sudoku grid
bool isValidSudoku(std::vector<std::vector<int>>& grid) {
    // Check all rows and columns
    for (int i = 0; i < grid.size(); ++i) {
        if (!isValidSet(getRow(grid, i))) return false;
        if (!isValidSet(getColumn(grid, i))) return false;
    }

    // Check all 3x3 sub-grids
    for (int i = 0; i < grid.size(); i += 3) {
        for (int j = 0; j < grid[0].size(); j += 3) {
            if (!isValidSet(getSubGrid(grid, i, j))) return false;
        }
    }
    return true;
}


// Function to print the Sudoku grid with proper formatting
void printGrid(std::vector<std::vector<int>>& grid) {
    for (int i = 0; i < grid.size(); ++i) {

        if (i % 3 == 0 && i != 0)
            std::cout << "------+-------+------" << std::endl;

        for (int j = 0; j < grid[0].size(); ++j) {
            if (j % 3 == 0 && j != 0) std::cout << "| ";
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


// Function to display menu and get user input
int getMenuChoice() {
    int choice; // User choice

    // Display menu
    std::cout << "Choose input type:\n";
    std::cout << "1. Single string with 81 numbers\n";
    std::cout << "2. Text input (9 rows, 9 numbers per row)\n";
    std::cout << "3. Hardcoded Sudoku grid\n";
    std::cout << "Enter choice: "; // Prompt user for choice

    std::cin >> choice; // Read choice
    std::cin.ignore(); // Clear the newline character
    return choice; // Return choice
}


// Function to parse a string input (81 characters) into a 2D dynamically allocated array
std::vector<std::vector<int>> parseStringInput(const std::string& input) {
    if (input.length() != 81) {
        std::cout << "Invalid input: must be exactly 81 characters." << std::endl;
        exit(1); // End program with error code 1
    }

    std::vector<std::vector<int>> grid(9, std::vector<int>(9)); // 9x9 grid
    // Parse the string input into the grid
    for (int i = 0; i < 81; ++i) {
        grid[i / 9][i % 9] = input[i] - '0'; // Convert character to integer
    }

    // Return the grid
    return grid;
}


// Function to get grid from a single string
std::vector<std::vector<int>> getGridFromString() {
    std::string input; // Input string

    // Ask user for input
    std::cout << "Enter Sudoku as a single string (81 characters): ";
    std::cin >> input; // Read input

    return parseStringInput(input); // Parse input and return grid
}

// Function to parse text input (9 rows of 9 numbers) into a vector
std::vector<std::vector<int>> parseTextInput() {
    std::vector<std::vector<int>> grid(9, std::vector<int>(9)); // 9x9 grid

    // Prompt user to enter the Sudoku grid
    std::cout << "Enter Sudoku grid (9 rows, 9 numbers per row):" << std::endl;

    // Read the grid from the user
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) std::cin >> grid[i][j];
    }
    return grid; // Return the grid
}

// Function to get hardcoded grid, returns a pointer to a hardcoded 2D array
std::vector<std::vector<int>> getHardcodedGrid() {
    return { {
        {5, 3, 4, 6, 7, 8, 9, 1, 2},
        {6, 7, 2, 1, 9, 5, 3, 4, 8},
        {1, 9, 8, 3, 4, 2, 5, 6, 7},
        {8, 5, 9, 7, 6, 1, 4, 2, 3},
        {4, 2, 6, 8, 5, 3, 7, 9, 1},
        {7, 1, 3, 9, 2, 4, 8, 5, 6},
        {9, 6, 1, 5, 3, 7, 2, 8, 4},
        {2, 8, 7, 4, 1, 9, 6, 3, 5},
        {3, 4, 5, 2, 8, 6, 1, 7, 9}
    } };
}


// Main function
int main() {
    int choice = getMenuChoice();
    std::vector<std::vector<int>> grid;

    switch (choice) {
    case 1: grid = getGridFromString(); break;
    case 2: grid = parseTextInput();    break;
    case 3: grid = getHardcodedGrid();  break;
    default:
        std::cout << "Invalid choice." << std::endl;
        return 1;
    }

    std::cout << "\nSudoku grid:" << std::endl;
    printGrid(grid);
    std::cout << std::endl;

    if (isValidSudoku(grid))
        std::cout << "The Sudoku solution is valid." << std::endl;
    else
        std::cout << "The Sudoku solution is invalid." << std::endl;

    return 0;
}
