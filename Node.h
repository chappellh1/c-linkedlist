#ifndef NODE_H
#define NODE_H

class Node {
public:
    int data;
    Node *left;
    Node *right;
    Node *next;

    // Constructor
    Node(int data);

    // Destructor
    ~Node();
};

#endif // NODE_H
