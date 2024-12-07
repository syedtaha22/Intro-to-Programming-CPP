/*
    Calculating the lengh of a linked list
*/

#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
    Node() : data(0), next(nullptr) {}
};

int getLength(Node* head) {
    int length = 0;
    Node* temp = head;
    while (temp != nullptr) {
        length++;
        temp = temp->next;
    }
    return length;
}

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

int main() {
    Node* head = nullptr;
    add(head, 1);
    add(head, 2);
    add(head, 3);

    std::cout << "Length of the linked list: " << getLength(head) << std::endl;

    return 0;
}
