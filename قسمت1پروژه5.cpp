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


class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    
    void insert(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    
    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList myList;

    
    myList.insert(5);
    myList.insert(10);
    myList.insert(15);
    myList.insert(20);

    
    myList.display();

    return 0;
}
