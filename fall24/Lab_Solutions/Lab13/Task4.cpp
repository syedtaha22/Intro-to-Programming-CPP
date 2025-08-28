/*
    Task 4:
        Write a function that takes in a 2D vector and converts each row into a linked list.
        For each row in the 2D vector, create a linked list where each node represents an
        element in the row. The function should return a vector of Node*, where each Node*
        represents a linked list for a corresponding row. Additionally, implement functions
        to print the original 2D vector and the vector of linked lists.

        Inside main(), create a 2d vector, and pass it to your function, and print the resulting
        linked lists, and the original vector.

        Note: A 2d vector, is a vector of vectors;
*/

// Include the necessary libraries
#include <iostream>
#include <vector>

// Node structure for the linked list
struct Node {
    /*
        * data: The integer data stored in the node
        * next: A pointer to the next node in the linked list
        * Node(int d): Constructor to initialize the node with data d
        * Node(): Default constructor
    */
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}
};

// Function to add a new node to the linked list
void addNode(Node*& head, int data) {
    /*
        - Create a new node with the data
        - If the list is empty, i.e Head is pointing to nothing, set head to the new node
        - Otherwise, traverse to the end of the list and add the new node there
    */
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) temp = temp->next;
    temp->next = newNode;
}

// Function to print the linked list
void printList(Node* head) {
    /*
        - Traverse the linked list
        - Print the data in each node
    */
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "nullptr" << std::endl;
}

// Function to delete the entire linked list
void deleteList(Node*& head) {
    /*
        - Traverse the linked list
        - Delete each node and move to the next one
    */
    Node* temp = head;
    while (head != nullptr) {
        head = head->next;
        delete temp;
        temp = head;
    }
}

// Function to create a linked list from a vector
Node* createLinkedList(const std::vector<int>& vec) {
    /*
        - Create a new linked list head
        - Add each element from the vector to the linked list
    */
    Node* head = nullptr;
    for (int i : vec) {
        addNode(head, i);
    }
    return head;
}

// Function to convert a 2D vector into a vector of linked lists
std::vector<Node*> convertToLinkedLists(const std::vector<std::vector<int>>& vec) {
    /*
        - Create a vector of linked lists
        - For each row in the 2D vector, create a linked list
        - Add the linked list to the vector
    */
    std::vector<Node*> result;
    for (const std::vector<int>& row : vec) {
        result.push_back(createLinkedList(row));
    }
    return result;
}

// Function to print the 2D vector
void print2DVector(const std::vector<std::vector<int>>& vec) {
    for (const std::vector<int>& row : vec) {
        for (int i : row) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
}

// Function to print the vector of linked lists
void printLinkedLists(const std::vector<Node*>& vec) {
    for (Node* head : vec) {
        printList(head);
    }
}

int main() {
    // Create a 2D vector
    std::vector<std::vector<int>> vec = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Get the linked lists from the 2D vector
    std::vector<Node*> linkedLists = convertToLinkedLists(vec);

    // Print the 2D vector and the linked lists
    std::cout << "2D Vector:" << std::endl;
    print2DVector(vec);

    // Print the linked lists
    std::cout << "\nLinked Lists:" << std::endl;
    printLinkedLists(linkedLists);

    // Deallocate memory for the linked lists
    for (Node* head : linkedLists) deleteList(head);

    return 0; // Return 0 to indicate successful completion
}