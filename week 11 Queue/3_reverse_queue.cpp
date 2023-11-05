// Reverse a queue using iterative method -> stack
// Reverse using recurssion

#include<iostream>
#include<stack>
#include<queue>
using namespace std;

// using stack
void reverseQueue(queue<int> &q) {
    stack<int> s;

    while(!q.empty()) {
        int element = q.front();
        s.push(element);
        q.pop();
    }

    while(!s.empty()) {
        int element = s.top();
        q.push(element);
        s.pop();
    }
}

// using recurssion 
void reverseRecc(queue<int> &q) {
    if(q.empty()) 
        return;

    int element = q.front();
    q.pop();

    reverseRecc(q);

    q.push(element); // backtracking
}

int main() {
    queue<int> q;

    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    // reverseQueue(q);
    reverseRecc(q);

    cout << "Printing the elements of iteration : ";
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

}