// Reverse the string using stack

#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> s;

    // create string
    string str = "vishnu";

int top=-1;
    for(int i=0; i<str.length(); i++) {
        s.push(str[i]);
        top++;
    }

cout << "Reversed string is : " << endl;
    for(int i=0; i<str.length(); i++) {
        cout << str[top] << " ";
        s.pop();
        top--;
    }
}