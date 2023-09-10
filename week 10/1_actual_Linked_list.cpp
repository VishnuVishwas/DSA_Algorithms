// Actual creation of Linked List

#include<iostream>
using namespace std;

// create Node
class Node {
public:
    int data;
    Node* next;

// if we dont have any input parameter 
    Node() {
        this->data = 0;
        this->next = NULL;
    }

// if we get input parameter for data set of node
    Node(int data) {
        this->data = data;
        this->next = NULL;          // this can be pointing to next node, but we will do it manually in main()
    }
};

// printing the values in linked list
void printLL(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;              // shifiting to next node
    }
}

int main() {

// creating individual nodes, they are not connected to each other
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

// linking the nodes based on address
    first->next = second;           // manually linking the LL nodes
    second->next = third;
    third->next = fourth;

// printing the values in nodes
    printLL(first);
}