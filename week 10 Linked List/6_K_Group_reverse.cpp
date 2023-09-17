// K Groups mein LL ko reverse krna h

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

Node* reverseGroups(Node* &head, int k) {
    if(head == NULL) {
        cout << "No nodes to reverse" << endl;
        return NULL;
    }

// invalid value of k
    int len = getLen(head);
    if(k > len) {
        return head;
    }

// 1case sambalo -> reverse kro
    Node* curr = head;
    Node* left = NULL;
    Node* right = curr->next;
    int i = 0;
    while(i < k) {
        right = curr->next;
        curr->next = left;
        left = curr;
        curr = right;
        i++;
    }

// recursion solving for rest k groups
    if(right != NULL) {
        head->next = reverseGroups(right, k);
    } 

    return left;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    cout << "Inserting at head : ";
    insertAtHead(head, tail, 5);
    insertAtHead(head, tail, 15);
    insertAtHead(head, tail, 52);
    insertAtHead(head, tail, 25);
    insertAtHead(head, tail, 57);
    insertAtHead(head, tail, 88);
    insertAtHead(head, tail, 99);
    print(head);

cout << endl;
    head = reverseGroups(head, 3);
    print(head);
}