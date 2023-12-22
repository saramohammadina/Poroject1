#include <iostream>

 
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

 
class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

     
    bool isEmpty() {
        return top == nullptr;
    }

     
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

   
    void pop() {
        if (isEmpty()) {
            std::cout << "Stack is empty. Cannot pop element." << std::endl;
            return;
        }

        Node* temp = top;
        top = top->next;
        delete temp;
    }

     
    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty. No top element." << std::endl;
            return -1;
        }

        return top->data;
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top element: " << stack.peek() << std::endl;

    stack.pop();
    stack.pop();

    std::cout << "Top element: " << stack.peek() << std::endl;

    return 0;
}
