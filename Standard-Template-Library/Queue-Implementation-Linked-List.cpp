#include <iostream>

// Node class
class Node {
public:
    int data;
    Node *link;
    Node(int data);
};

// Node constructor
Node::Node(int data) {
    this->data = data;
    link = nullptr;
}

// Queue class
class Queue {
private:
    Node *front;
    Node *rear;
public:
    Queue();
    void enqueue(int element);
    void dequeue();
    void display();
};

Queue::Queue() {
    front = rear = nullptr;
}

void Queue::enqueue(int element) {
    // Create a new node
    Node* newNode = new Node(element);
    // Check if queue is full, it's full when heap is full i.e no node can't be created
    if(newNode == nullptr)
        std::cout << "Queue is full" << std::endl;
    else {
        newNode->data = element;
        newNode->link = nullptr;
        // If 1st node is created then front and rear will be pointing to same node
        if(front == nullptr)
            front = rear = newNode;
        else {
            rear->link = newNode;
            rear = newNode;
        }
    }
}

void Queue::dequeue() {
    
}
