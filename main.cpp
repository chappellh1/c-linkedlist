#include "node.h"
#include <iostream>

int main() {

Node* head = new Node(1);
Node* second = new Node(2);
Node* third = new Node(3);

head->next = second;
second->next = third;

Node* current = head;
while(current != nullptr) {
    cout << current->data << " ";
    current = current->next;
}

cout << endl;

delete head;
delete second;
delete third;

return 0;

}

