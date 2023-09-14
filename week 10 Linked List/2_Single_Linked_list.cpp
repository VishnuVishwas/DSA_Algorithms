#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~Node() {
        cout << "Node deleted" << endl;
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

void deleteNode(Node* &head,Node* &tail, int pos) {
    if(head == NULL) {
        cout << "Invalid Position" << endl;
        return;
    }

// delete first node
    if(pos == 1) {
        Node* temp = head;
        temp->next = NULL;
        delete temp;
        return;
    }

// delete Last node
    int len = getLen(head);
    if(pos == len) {
        int i=1;
        Node* prev = head;
        while(i < pos-1) {
            prev = prev->next;
            i++;
        }

        prev->next = NULL;
        Node* temp = tail;
        tail = prev;
        delete temp;
        return;
    }

// Delete given pos node
    int i=1;

    Node* temp = head;
    while(i < pos-1) {
        temp = temp->next;
        i++;
    }

    Node* curr = temp->next;
    temp->next = curr->next;
    curr->next = NULL;
    delete curr;
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

    cout << endl << "Inserting at tail : ";
    insertAtTail(head, tail, 88);
    insertAtTail(head, tail, 77);
    print(head);

    cout << endl << "Inserting at desired position : ";
    insertAtPos(head, tail, 500, 3);
    print(head);

cout << endl << "After deleting : " ; 
    deleteNode(head, tail, 2);
    print(head);

    // deleteNode(head, tail, 1);
    // print(head);

        deleteNode(head, tail, 7);
    print(head);
}