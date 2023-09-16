// Reversing a Linked List

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

int getLen(Node* head) {
    Node* temp = head;
    int length = 0;

    while(temp != NULL) {
        temp = temp->next;
        length++;
    }

    return length;
}

void insertAtHead(Node* &head, Node* &tail, int data) {
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    else{
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data) {
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
}

void insertAtPos(Node* &head, Node* &tail, int data, int pos) {
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    
    if(pos == 0) {
        insertAtHead(head, tail, data);
        return;
    }
    
    int len = getLen(head);
    if(pos == len) {
        insertAtTail(head, tail, data);
        return;
    }

    Node* prev = head;
    int i=1;
    while(i < pos){
        prev = prev->next;
        i++;
    }

    Node* curr = prev->next;
    Node* newNode = new Node(data);

    newNode->next = curr;
    prev -> next = newNode;
    
}

void print(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    cout << "Inserting at head : ";
    insertAtHead(head, tail, 5);
    insertAtHead(head, tail, 15);
    insertAtHead(head, tail, 52);
    insertAtHead(head, tail, 25);
    print(head);

    
}