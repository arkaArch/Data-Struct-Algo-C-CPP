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

void preorder(Node* ptr) {
    // if node is not null
    //    Print data, Store address to the stack, go to left child
    // if null
    //    pop out the parent address from stack, go to it's right child
    std::stack<Node*> st;
    while (ptr || !st.empty()) {
        if (ptr) {
            std::cout << ptr->data << " ";
            st.push(ptr);
            ptr = ptr->l_child;
        }
        else {
            ptr = st.top();
            st.pop();
            ptr = ptr->r_child;
        }
    }
}

void inorder(Node* ptr) {
    // if node is not null
    //    Store address to the stack, go to left child
    // if null
    //    pop out the parent address from stack, print data, go to it's right child
    std::stack<Node*> st;
    while (ptr || !st.empty()) {
        if (ptr) {
            st.push(ptr);
            ptr = ptr->l_child;
        }
        else {
            ptr = st.top();
            st.pop();
            std::cout << ptr->data << " ";
            ptr = ptr->r_child;
        }
    }
}

void postorder(Node* ptr) {
    // if node is not null
    //    Store address to the stack, go to left child
    // if null
    //    pop out the parent address from stack go to right child
    std::stack<Node*> st;
    long temp;
    while (ptr || !st.empty()) {
        if (ptr) {
            st.push(ptr);
            ptr = ptr->l_child;
        }
        else {
            temp = (int)st.top();
            st.pop();
            if (temp > 0) {
                st.push((Node*)(-temp));
                ptr = ((Node*)temp)->r_child;
            }
            else {
                std::cout << ((Node*)temp)->data << " ";
                ptr = nullptr;
            }
        }
    }
}