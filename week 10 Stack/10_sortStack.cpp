// Sort a stack

#include<iostream>
using namespace std;
#include<stack>

void insertStack(stack<int>& s, int& target) {
    if(s.empty()) {
        s.push(target);
        return;
    }

    if(s.top() >= target) {
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();
    insertStack(s, target);
    s.push(topElement);
}

void sortStack(stack<int>& s) {
    if(s.empty()) {
        return;
    }

    int topElement = s.top();
    s.pop();

    sortStack(s);
    insertStack(s, topElement);
    
}

int main() {
    stack<int> s;
    s.push(9);
    s.push(2);
    s.push(15);
    s.push(8);

    sortStack(s);

    cout << "After inserting the target : ";
    while (!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}