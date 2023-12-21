#include "Node.h"
#include <iostream>
#include <cassert>

int main() {

    // Creating nodes for a binary tree
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);

    // Displaying binary tree nodes
    std::cout << "Binary Tree Nodes: " << std::endl;
    std::cout << "Root: " << root->data << std::endl;
    std::cout << "Left: " << root->left->data << std::endl;
    std::cout << "Right: " << root->right->data << std::endl;

    // Creating nodes for a linked list
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    // Displaying linked list nodes
    Node *current = head;
    std::cout << "\nLinked List Nodes: " << std::endl;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;

    // Cleanup to avoid memory leaks
    delete root->left;
    delete root->right;
    delete root;

    while (head != nullptr) {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}


