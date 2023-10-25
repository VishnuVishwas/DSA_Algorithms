// Insert element into sorted stack

#include<iostream>
using namespace std;
#include<stack>

void insertStack(stack<int>& s, int& target) {
    if(s.empty()) {
        s.push(target);
        return;
    }

    if(target >= s.top()) {
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();
    insertStack(s, target);
    s.push(topElement);
}


int main() {
    int target = 3;

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(4);
    s.push(5);

    insertStack(s, target);

    cout << "After inserting the target : ";
    while (!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}