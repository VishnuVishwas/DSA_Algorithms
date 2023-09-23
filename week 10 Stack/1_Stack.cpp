// user defined stack with functions

#include<iostream>
using namespace std;

class Stack {

public:
    int* arr;
    int top;
    int size;

    Stack(int size) {
        arr = new int[size];
        this->top = -1;
        this->size = size;
    }

// push element to stack
    void push_back(int data) {
        if(size-top == 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        else {
            top++;
            arr[top] = data;
        }
    }

// removing the top most element from the stack
    void pop_back() {
        if(top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }
        else {
            top--;
        }
    }

    int get_top() {
         return arr[top];
    }

// size of stack
    int get_size() {
        if(top == -1) {
            cout << "Stack empty "  << endl;
            return 0;
        }
        else {
            return top+1;
        }
    }

// stack empty or not 
    bool isEmpty() {
        if(top == -1) 
            return true;
        
        else 
            return false;
    }
};


int main() {
    Stack s(10);

// push element to stack
    s.push_back(45);
    s.push_back(57);
    s.push_back(66);
    s.push_back(33);
    cout << "Top element is : " << s.get_top() << endl;        // check the topmost element of stack

// remove element from stack
    s.pop_back();
    cout << "Top element is : " << s.get_top() << endl;
    s.pop_back();
    cout << "Top element is : " << s.get_top() << endl;
    s.pop_back();
    // cout << "Top element is : " << s.get_top() << endl;
    // s.pop_back();
    // s.pop_back();
    // cout << "Top element is : " << s.get_top() << endl; // garbage value 

// stack empty or not
    if(s.isEmpty() ) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "Stack is not empty" << endl;
    }

// size of stack
    cout <<"Size of stack is : " << s.get_size() << endl;
}