// Reverse the string using stack

#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<char> s;

    // create string
    string str = "vishnu";

    for(int i=0; i<str.length(); i++) {
        s.push(str[i]);
    }

cout << "Reversed string is : " << endl;
    while( !s.empty() ) {
        cout << s.top();
        s.pop();
    }
}