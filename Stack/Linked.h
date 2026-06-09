#pragma once
#include <iostream>

template<typename T>
class Stack {
private:
    struct Node {
        T data;
        Node* next;
        Node(T val) : data(val), next(nullptr) {}
    };

    Node* TOS;          // Top of stack (head of list)
    int No_of_elements;

public:
    Stack() : TOS(nullptr), No_of_elements(0) {}

    ~Stack() {
        while (!isEmpty()) pop();
    }

    void push(T value) {
        Node* newNode = new Node(value);
        newNode->next = TOS;
        TOS = newNode;
        No_of_elements++;
    }

    T pop() {
        if (isEmpty()) {
            std::cout << "Stack Underflow!!" << std::endl;
            return T{};          // safer default than -1 for generic T
        }
        Node* temp = TOS;
        T val = temp->data;
        TOS = TOS->next;
        delete temp;
        No_of_elements--;
        return val;
    }

    T peek() {
        if (isEmpty()) {
            std::cout << "Stack Underflow!!" << std::endl;
            return T{};
        }
        return TOS->data;
    }

    void display() {
        if (isEmpty()) {
            std::cerr << "Stack is empty.\n";
            return;
        }
        Node* curr = TOS;
        while (curr != nullptr) {
            std::cout << curr->data <<" -> ";
            curr = curr->next;
        }
        std::cout<<"NULL"<<std::endl;
    }

    int  size()    { return No_of_elements; }
    bool isEmpty() { return TOS == nullptr; }
    bool isFull()  { return false; }   // linked list never overflows
};
