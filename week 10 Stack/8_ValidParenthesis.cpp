// Leet code - 20. valid parenthesis

#include<iostream>
#include<stack>
using namespace std;

bool validParenthesis(stack<char> s, string str) {

    for(int i=0; i<str.length(); i++) {

        // opening bracket
        if(str[i] == '(' || str[i] == '{', str[i] == '[') {
            s.push(str[i]);
        }

        else {
        // closing bracket 
            if(!str.empty()){
                if(str[i] == ')' && s.top() == '(')
                    s.pop();
                else if(str[i] == '}' && s.top() == '{')
                    s.pop(); 
                else if(str[i] == ']' && s.top() == '[')
                    s.pop();
            }
            else {
                return false; 
            }
        }
    }
    if(s.empty()) 
        return true;
    else 
        return false;

}

int main() {
    stack<char> s;
    string str = "{([])}";
    
    bool flag = validParenthesis(s, str);
    if(flag)
        cout << "Valid string" << endl;
    else
        cout << "Invalid string" << endl;
}