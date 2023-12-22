#include <iostream>


class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        prev = nullptr;
        next = nullptr;
    }
};


class LinkedList {
private:
    Node* head;
    Node* tail;
    int size;

public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    
    void InsertAtIndex(int data, int index) {
        
    }

    
    void InsertAtEnd(int data) {
        
    }


    void InsertAtBegin(int data) {
        
    }

    
    void UpdateNode(int data, int index) {
        
    }

    
    int RemoveNodeAtIndex(int index) {
        
    }

    
    int RemoveNodeAtEnd() {
        
    }

    
    int RemoveNodeAtBegin() {
         
    }

    
    int SizeOfList() {
         
    }

     
    void Concatenate(LinkedList list) {
        
    }
};

int main() {
    
    LinkedList myList;

    

    return 0;
}

