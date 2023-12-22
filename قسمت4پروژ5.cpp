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


class LinkedListArray {
private:
    Node* head;
    int size;

public:
    LinkedListArray() {
        head = nullptr;
        size = 0;
    }

    
    void add(int value) {
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

        size++;
    }

    
    int get(int index) {
        if (index < 0 || index >= size) {
            std::cout << "Index out of bounds!" << std::endl;
            return -1;
        }

        Node* current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }

        return current->data;
    }

    
    int getSize() {
        return size;
    }
};

int main() {
    LinkedListArray arr;

    arr.add(10);
    arr.add(20);
    arr.add(30);

    std::cout << "Element at index 0: " << arr.get(0) << std::endl;
    std::cout << "Element at index 1: " << arr.get(1) << std::endl;
    std::cout << "Element at index 2: " << arr.get(2) << std::endl;

    std::cout << "Size of the array: " << arr.getSize() << std::endl;

    return 0;
}

