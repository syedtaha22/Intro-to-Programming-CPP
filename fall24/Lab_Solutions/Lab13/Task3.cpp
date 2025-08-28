/*

    Task 3:
        Write a function that takes the head of a linked list of integers and traverses it
        to calculate the sum of all its elements. Additionally, implement a function to add
        a new node containing an integer value at the end of the linked list.

        You are required to:
        1.	Write a function that takes the head of a linked list and traverses the list to
            compute the sum of all its elements. Return the final sum.
        2.	Write a separate function that takes the head of the linked list and a value, then
            adds a new node containing the given value to the end of the list.

        Ensure that your program works correctly for edge cases, such as an empty linked list
        or a list with only one node. Finally, create a function to print the linked list,
        showing all the elements from the head to the last node.
*/

// Include the necessary libraries
#include <iostream>

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
    Node() : data(0), next(nullptr) {}
};


void add(Node*& head, int data) {
    // Create a new node with the data
    Node* newNode = new Node(data);

    // If the list is empty, i.e Head is pointing to nothing, set head to the new node
    if (head == nullptr) {
        head = newNode;
        return;
    }


    Node* temp = head; // Create a temporary pointer to traverse the list
    while (temp->next != nullptr) temp = temp->next; // Move temp to the last node
    temp->next = newNode; // Add the new node to the end of the list
}


int countSum(Node*& head) {
    int sum = 0; // Initialize the sum to 0
    Node* temp = head; // Create a temporary pointer to traverse the list
    // Traverse the linked list and add the data of each node to the sum
    while (temp->next != nullptr) {
        sum += temp->data; // Add the data of the current node to the sum
        temp = temp->next; // Move to the next node
    }

    return sum; // Return the final sum
}

void print(Node*& head) {
    Node* temp = head; // Create a temporary pointer to traverse the list
    while (temp->next != nullptr) {
        std::cout << temp->data << " -> "; // Print the data of the current node
        temp = temp->next; // Move to the next node
    }
    std::cout << "nullptr\n"; // Print nullptr at the end of the list
}

int main() {
    // Initialize the linked list head
    Node* head = nullptr;

    // Add elements to the linked list
    for (int i = 0; i <= 5; i++) add(head, i + 1);

    // Print the linked list
    std::cout << "Linked List: ";
    print(head);

    // Print the sum of the elements in the linked list
    std::cout << "Sum: " << countSum(head) << std::endl;

    return 0; // return 0 to indicate successful completion
}