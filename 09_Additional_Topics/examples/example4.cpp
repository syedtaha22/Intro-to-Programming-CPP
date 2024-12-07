/*
    Findin a given value in a linked list
*/

#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
    Node() : data(0), next(nullptr) {}
};

void add(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) temp = temp->next;
    temp->next = newNode;
}

// Function to find a value in the linked list
bool findValue(Node* head, int value) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == value) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main() {
    Node* head = nullptr;
    add(head, 1);
    add(head, 2);
    add(head, 3);

    int value = 2;
    if (findValue(head, value)) {
        std::cout << "Value " << value << " found in the linked list!" << std::endl;
    }
    else {
        std::cout << "Value " << value << " not found in the linked list." << std::endl;
    }

    return 0;
}
