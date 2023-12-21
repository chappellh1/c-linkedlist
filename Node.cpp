#include "Node.h"

Node::Node(int data) : data(data), left(nullptr), right(nullptr), next(nullptr) {}

Node::~Node() {
    // Cleanup code if needed
}
