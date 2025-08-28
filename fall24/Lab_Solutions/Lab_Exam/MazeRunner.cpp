/*
    Task 3:
        A robot is placed in the top-left corner of a maze represented by a 2D grid. The robot can move down or
        right, but some cells are blocked (represented by 0).

        Write a program to:
            1.  Input the size of the maze and the maze layout (1 = open, 0 = blocked).
            2.  Use recursion to find all possible paths from the top-left corner to the bottom-right
                corner of the maze.
            3.  Print each path.

        Example Input:
            Maze (3 x 3):
            1 1 0
            0 1 0
            1 1 1

        Example Output:
        Paths:
            1. (0, 0) -> (0, 1) -> (1, 1) -> (2, 1) -> (2, 2)

        Submission: MazeRunner.cpp

        Restrictions:
            - Don't use std::pairs, or std:vectors
*/

// Include the necessary libraries
#include <iostream>

// We'll use a linked list to store the path, and an array of linked lists to store all paths
struct Node {
    int x, y;
    Node* next;

    // Default constructor
    Node() : next(nullptr) {}
    // Constructor to initialize the node
    Node(int x, int y) : x(x), y(y), next(nullptr) {}
};

// Structure to represent a Path
struct Path {
    Node* head;

    // Default constructor
    Path() { head = nullptr; }

    // Copy constructor
    Path(const Path& path) {
        head = nullptr;
        Node* temp = path.head;
        while (temp != nullptr) {
            addNode(temp->x, temp->y);
            temp = temp->next;
        }
    }

    // Function to add a node to the path
    void addNode(int x, int y) {
        Node* newNode = new Node(x, y);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) temp = temp->next;
        temp->next = newNode;
    }

    // Overload the << operator to display the path
    friend std::ostream& operator<<(std::ostream& os, const Path& path) {
        Node* temp = path.head;
        while (temp != nullptr) {
            os << "(" << temp->x << ", " << temp->y << ")";
            if (temp->next != nullptr) os << " -> ";
            temp = temp->next;
        }
        return os;
    }

    // Destructor to free the memory allocated for the path
    ~Path() {
        Node* temp = head;
        while (head != nullptr) {
            head = head->next; // Move head forward
            delete temp; // Delete the previous head
            temp = head; // Update temp
        }
    }
};

// Function to see if the robot can move to a cell
bool canMove(int** maze, int rows, int cols, int x, int y) {
    return x >= 0 && x < rows && y >= 0 && y < cols && maze[x][y] == 1;
}

// Function to get all possible paths in the maze
void findPaths(int** maze, int rows, int cols, int x, int y, Path path) {
    /*
        -  Base case: If the robot reaches the bottom-right corner of the maze
        -  For each possible move (down or right), check if the robot can move to the new cell
        -  If the robot can move to the new cell, add the current cell to the path
        -  Recursively call the function with the new cell and path

        Limitation: This function assumes that the robot can only move down or right
        Try to implement a more general solution that allows the robot to move in all four directions
    */

    // If the robot reaches the bottom-right corner
    if (x == rows - 1 && y == cols - 1) {
        // Print the path
        std::cout << path << std::endl;
        return;
    }
    int dx[] = { 1, 0 }; // Down, Right
    int dy[] = { 0, 1 }; // Down, Right

    // For each possible move
    for (int i = 0; i < 4; i++) {
        // Calculate the new cell
        int newX = x + dx[i];
        int newY = y + dy[i];

        // If the robot can move to the new cell
        if (canMove(maze, rows, cols, newX, newY)) {
            // Add the current cell to the path
            Path newPath = path;
            newPath.addNode(newX, newY);
            // Recursively call the function with the new path
            findPaths(maze, rows, cols, newX, newY, newPath);
        }
    }
}

// Wrapper function to find all possible paths in the maze
void findPaths(int** maze, int rows, int cols) {
    Path path; // Initialize an empty path
    path.addNode(0, 0); // Add the starting cell to the path
    findPaths(maze, rows, cols, 0, 0, path); // Find all possible paths
}


int main() {
    int rows, cols;
    std::cout << "Enter the number of rows and columns: ";
    std::cin >> rows >> cols;

    // Allocate memory for the maze
    int** maze = new int* [rows];
    // Input the maze layout
    for (int i = 0; i < rows; i++) {
        maze[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            std::cin >> maze[i][j];
        }
    }

    // Find all possible paths in the maze
    findPaths(maze, rows, cols);

    // Free the memory allocated for the maze
    for (int i = 0; i < rows; i++) delete[] maze[i];
    delete[] maze;

    return 0; // Return 0 to indicate successful completion
}
