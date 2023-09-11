// Basic LL complete working

#include<iostream>
using namespace std;

// node creation
class Node {
public:
    int data;
    Node* next;

// creating initial node 
    Node() {
        this->data = 0;
        this->next = NULL;
    }

// creating a parameterised Node
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    Node* first = new Node(45);
    Node* second = new Node(33);
    Node* third = new Node(11);

    first->next = second;
    second->next = third;

    print(first);
}