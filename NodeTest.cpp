#include <gtest/gtest.h>
#include "Node.h"

// Test the Node constructor
TEST(NodeTest, Creation) {
    Node node(10);
    EXPECT_EQ(node.data, 10);
    EXPECT_EQ(node.next, nullptr);
}

// Test adding elements to a linked list and traversing it
TEST(NodeTest, Traversal) {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    Node *current = head;
    int expectedValue = 1;
    while (current != nullptr) {
        EXPECT_EQ(current->data, expectedValue);
        current = current->next;
        expectedValue++;
    }

    // Cleanup
    while (head != nullptr) {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
