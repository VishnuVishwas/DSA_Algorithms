// Find the middle element of stack

#include<iostream>
#include<stack>
using namespace std;

void findMiddle(stack<int> s, int totalSize) {

    if(totalSize == 0) {
        cout << "Stack is empty " << endl;
        return;
    }

    if(s.size() == totalSize/2+1) {
        cout << "Middle element is : " << s.top() << endl;
        return;
    }

    int temp = s.top();
    s.pop();

// recurrsion 
    findMiddle(s, totalSize);

// back Tracking
    s.push(temp);
}

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    int size = s.size();
    findMiddle(s, size);

}   