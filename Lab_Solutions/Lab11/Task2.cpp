/*
    Task 2:
        The Tower of Hanoi is a classic problem in computer science and mathematics.
        The problem involves three rods and a number of disks of different sizes.
        The objective is to move all the disks from the first rod to the third rod,
        subject to the following rules:

            1. Only one disk can be moved at a time.
            2. Each move consists of taking the top disk from one of the stacks and
               placing it on top of another stack.
            3. No disk may be placed on top of a smaller disk.

        The challenge is to move all the disks from the start rod to the end rod while
        adhering to these rules.

        Write a recursive function to solve the Tower of Hanoi problem. The function should
        take the number of disks, the start rod, and the end rod as arguments.

        Inside the main function, call this recursive function to solve the problem for a
        defined number of disks.
        Additionally, implement a helper function ‘move(start, end)’ that prints the move
        of a disk from the start rod to the end rod.

        Write an explanation and describe your approach to solve the Tower of Hanoi problem.

*/

// Include the required libraries
#include <iostream>

// Helper function to print the move
void move(int start, int end) {
    std::cout << start << " -> " << end << std::endl;
}

// Recursive function to solve the Tower of Hanoi problem
void hanoi(int n, int start, int end) {
    /*
        Base case:
            If there is only one disk, move it from the start rod to the end rod.
        Recursive case:
            Move n-1 disks from the start rod to the auxiliary rod.
            Move the nth disk from the start rod to the end rod.
            Move the n-1 disks from the auxiliary rod to the end rod.
    */
    if (n == 1) move(start, end);
    else {
        int aux = 6 - start - end;
        hanoi(n - 1, start, aux);
        move(start, end);
        hanoi(n - 1, aux, end);
    }
}

int main() {
    // Get the number of disks from the user
    int numDisks;
    std::cout << "Enter the number of disks: ";
    std::cin >> numDisks;

    // Print the number of disks
    std::cout << "Solution for " << numDisks << " disks:" << std::endl;
    // Call the towerOfHanoi function to solve the problem
    hanoi(numDisks, 1, 3);

    return 0;
}
