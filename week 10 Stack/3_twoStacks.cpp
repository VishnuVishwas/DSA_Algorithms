// one array -> two stacks

#include<iostream>
using namespace std;

class Stack {
public:
    int* arr;

    int top1;
    int top2;

    int size;

    Stack(int size) {
        arr = new int[size];
        this->top1 = -1;
        this->top2 = size;

        this->size = size;
    }

// push element to stack 1
    void push_back1(int data) {
        if(top2-top1 == 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        else {
            top1++;
            arr[top1] = data;
        }
    }
// push element to stack 2
    void push_back2(int data) {
        if(top2-top1 == 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        else {
            top2--;
            arr[top2] = data;
        }
    }

// removing the top most element from the stack1
    void pop_back1() {
        if(top1 == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }
        else {
            top1--;
        }
    }
// removing the top most element from the stack2
    void pop_back2() {
        if(top1 == size) {
            cout << "Stack Underflow" << endl;
            return;
        }
        else {
            top2++;
        }
    }

    int get_top() {
        return arr[top1];
        // return arr[top2];
    }

// size of stack
    int get_size() {
        if(top1 == -1) {
            cout << "Stack empty "  << endl;
            return 0;
        }
        else {
            return top2+1;
        }
    }

// stack empty or not 
    bool isEmpty() {
        if(top1 == -1) 
            return true;
        
        else 
            return false;
    }
};


int main() {
    Stack s(5);

    s.push_back1(50);
    s.push_back1(70);
    s.push_back1(60);

    s.push_back2(2);
    s.push_back2(1);

    cout << "Top element is : " << s.get_top() << endl;
   
    
}