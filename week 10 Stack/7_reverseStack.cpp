// Reverse stack 

#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>& s, int& target) {

    if(s.empty()) {
        s.push(target);
        return;
    }

    int temp = s.top();
    s.pop();
    solve(s, target);
    s.push(temp);

}

void reverseStack(stack<int>& s) {
// stack reverse 
    if(s.empty()) {
        return;
    }

    int target = s.top();
    s.pop();

    reverseStack(s);
// insert element at bottom
    solve(s, target);

}

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

// stack reverse call
    reverseStack(s);

    cout << "After reversing the stack : ";
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}