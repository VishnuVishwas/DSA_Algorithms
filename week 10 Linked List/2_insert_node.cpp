#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node() {
            this->data = 0;
            this->next = NULL;
        }

        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

void insertAtHead(Node*&head, Node*&tail, int data) {

    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    else {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(Node*&head, Node*&tail, int data) {

    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    else {
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
}

void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 70);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 90);
    insertAtHead(head, tail, 100);

    print(head);

    cout << "\nInserting into tail" << endl;
    insertAtHead(head, tail, 1);
    insertAtHead(head, tail, 2);

    print(head);


}