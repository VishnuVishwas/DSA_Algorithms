// STL Stack creation and STL functions

#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "Top element of stack is : " << s.top() << endl;

    s.pop();
    cout << "Top element of stack is : " << s.top() << endl;

    cout << "Size of stack is : " << s.size() << endl;
    cout << "Empty or not : " << s.empty() << endl;
}