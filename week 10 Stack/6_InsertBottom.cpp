// Insert the bottom element of stack into end of stack

#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>& s, int& target) {

// reached bottom of stack or empty stack
    if(s.empty()) {
        s.push(target);
        return;
    }

// store element for later backtracking 
    int temp = s.top();
    s.pop();
    // recurssion
    solve(s, target);
    // Backtracking
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

    cout << "Before math : " << s.top() << endl;    

    int target = s.top();
    s.pop();
    solve(s, target);
    
    cout << "After math : " << s.top() << endl;
}