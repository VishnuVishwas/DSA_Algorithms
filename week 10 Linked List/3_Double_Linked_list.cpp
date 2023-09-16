// Double Linked List

#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
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
    
    Node* newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return;
}

void insertAtTail(Node* &head, Node* &tail, int data) {
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    
    Node* newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    return;
}

void insertAtPos(Node* &head, Node* &tail, int data, int pos) {
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    if(pos == 1) {
        insertAtHead(head, tail, data);
        return;
    }   

    int len = getLen(head);
    if(pos >= len) {
        insertAtTail(head, tail, data);
        return;
    }

    int i=1;
    Node* left = head;
    while(i < pos-1) {
        left = left->next;
        i++;
    }

    Node* curr = left->next;
    Node* newNode = new Node(data);

    left->next = newNode;
    newNode->prev = left;

    curr->prev = newNode;
    newNode->next = curr;
}

void deleteNode(Node* &head, int pos) {
    if(head == NULL) {
        cout << "Node cannot be deleted" << endl;
        return;
    }

    if(pos == 1) {
        Node* temp = head;
        temp->next = NULL;
        delete temp;
        return;
    }

    int len = getLen(head);
    if( pos > len) {
        cout << "Invalid position" <<endl;
        return;
    }

    Node* left = head;
    int i=1;
    while(i < pos-1) {
        left = left->next;
        i++;
    }

    Node* curr = left->next;
    Node* right = curr->next;

    left->next = right;
    right->prev = left;

    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
    
}

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 100);
    insertAtHead(head, tail, 150);
    insertAtHead(head, tail, 200);    
    print(head);                             // insert at head

cout << endl;
    insertAtTail(head, tail, 350);           // insert at tail
    insertAtTail(head, tail, 300);  
    print(head); 

cout << endl;
    insertAtPos(head, tail, 500, 3);
    print(head);

cout << endl;
    deleteNode(head, 4);
    cout << "After deletion : ";
    print(head);
}