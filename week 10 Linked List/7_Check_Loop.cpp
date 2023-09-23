// check wheather loop is present in LL or not 

#include<iostream>
using namespace std;

class Node{
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

bool checkLoop (Node* &head) {
    if(head == NULL) {
        cout << "No nodes present" << endl;
    }

    if(head->next == NULL) {
        cout << "Not a loop" << endl;
    }

    Node* slow = head;
    Node* fast = head;

    while( slow != NULL && fast != NULL ) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }

        if(slow = fast) {
            return true;
        }
    }

    return false;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    cout << "Inserting at head : ";
    Node* first = new Node(45);
    Node* second = new Node(33);
    Node* third = new Node(11);
    Node* fourth = new Node(11);
    Node* fifth = new Node(11);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    fifth->next = third;
    print(first);

cout << endl;
    if (checkLoop(head) ) {
        cout << "Contains Loop" << endl;
    }
    else {
        cout << "Linked List doesnot contain any loop" << endl;
    }

}