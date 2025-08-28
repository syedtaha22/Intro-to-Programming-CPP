/*
    Task 2:
        Create a function that takes in a string as an argument and stores each character
        in a linked list. The function should return the first node of the linked list,
        which is the head. Next, write a function that prints the string by traversing
        the linked list and displaying the characters in order.

        Additionally, implement relevant functions to add nodes to the linked list and
        to delete the entire linked list at the end of the program.
*/


#include <iostream>
#include <string>

// Node structure for the linked list
struct Node {
    /*
        * data: The character data stored in the node
        * next: A pointer to the next node in the linked list
        * Node(char d): Constructor to initialize the node with data d
    */
    char data;
    Node* next;

    Node(char data) : data(data), next(nullptr) {}
};

// Function to add a new node to the linked list
void addNode(Node*& head, char data) {
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
        std::cout << "\033[91m" << temp->data << "\033[0m -> ";
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

// Function to create a linked list from a string
Node* createLinkedList(const std::string& str) {
    /*
        - Create a linked list head
        - For each character in the string, add a new node to the linked list
        - Return the head of the linked list
    */
    Node* head = nullptr;
    for (char c : str) {
        addNode(head, c);
    }
    return head;
}


int main() {
    // Get a string input from the user
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    // Create a linked list from the string
    Node* head = createLinkedList(str);

    printList(head); // Print the linked list
    deleteList(head); // Delete the linked list
    return 0; // Return 0 to indicate successful completion
}
