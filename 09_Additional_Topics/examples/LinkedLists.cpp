/*
    Linked List Implementation
*/

#include <iostream>

struct Node {
    int data;      // Data stored in the node
    Node* next;    // Pointer to the next node

    // Default constructor
    Node() : data(0), next(nullptr) {}

    // Parameterized constructor
    Node(int value) : data(value), next(nullptr) {}
};

// Function to traverse the linked list and return the last node
Node* traverse(Node*& head) {
    // Temporary pointer to traverse the list
    Node* temp = head;
    // Until the next node is not nullptr, move to the next node
    while (temp->next != nullptr) temp = temp->next;

    // Return the last node
    return temp;
}

void add(Node*& head, int data) {
    // Create a new node with the data
    Node* newNode = new Node(data);

    // If the list is empty, i.e Head is pointing to nothing, set head to the new node
    // and return, as we've added the first element
    if (head == nullptr) {
        head = newNode;
        return;
    }
    // Otherwise, traverse to the end of the list and add the new node there

    // Traverse to the end of the list
    Node* temp = traverse(head);
    temp->next = newNode; // Add the new node to the end of the list
}

void print(Node*& head) {
    // Create a temporary pointer to traverse the list
    Node* temp = head;

    // Traverse the linked list and print the data in each node
    while (temp != nullptr) {
        std::cout << temp->data << " -> "; // Print the data of the current node
        temp = temp->next; // Move to the next node
    }
    std::cout << "nullptr\n"; // Print nullptr at the end of the list
}

void deleteList(Node*& head) {
    Node* temp = head; // Create a temporary pointer to traverse the list
    while (head != nullptr) {
        head = head->next; // Move head to the next node
        delete temp; // Delete the current node
        temp = head; // Move temp to the next node
    }
}

int main() {
    // Initialize the linked list head
    Node* head = nullptr;

    // Add elements to the linked list
    add(head, 1);
    add(head, 2);
    add(head, 3);
    add(head, 4);


    // Print the linked list
    std::cout << "Linked List: ";
    print(head);

    // Last node
    std::cout << "Data in the last node: " << traverse(head)->data << std::endl;

    // Delete the linked list
    deleteList(head);

    return 0;
}