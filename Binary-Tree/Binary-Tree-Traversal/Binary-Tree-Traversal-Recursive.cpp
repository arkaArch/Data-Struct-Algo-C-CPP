#include <iostream>
#include <stack>

struct Node {
    int data;
    Node* l_child;
    Node* r_child;
    Node(int data) {
        this->data = data;
        l_child = r_child = nullptr;
    }
};

void preorder_printing(Node* ptr) {
    if (ptr) {
        printf("%d ", ptr->data);
        preorder_printing(ptr->l_child);
        preorder_printing(ptr->r_child);
    }
}

void inorder_printing(Node* ptr) {
    if (ptr) {
        inorder_printing(ptr->l_child);
        printf("%d ", ptr->data);
        inorder_printing(ptr->r_child);
    }
}

void postorder_printing(Node* ptr) {
    if (ptr) {
        postorder_printing(ptr->l_child);
        postorder_printing(ptr->r_child);
        printf("%d ", ptr->data);
    }
}
