#include <iostream>
#include "node.h"
using namespace std;

class Node {

public:

    int data; // stored the data in a node
    node* next; // points to next node

    // constructor

    Node(int val) {

        data = val;
        next = nullptr;

    }

}

