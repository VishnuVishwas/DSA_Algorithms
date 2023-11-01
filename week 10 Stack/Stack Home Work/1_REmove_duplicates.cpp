// Remove adjacent duplicates of a string, many times

#include<iostream>
#include<stack>
#include<bits/stdc++.h> 
using namespace std;

string removeAdjacent(string str) {

    stack<char> st;
    for(int i=0; i<str.size(); i++) {

        char ch = str[i];
        if(!st.empty() && st.top() == ch) {
            st.pop();
        }
        else {
            st.push(ch);
        }
    }

    string ans;
    while(!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    return ans;
    
}

int main() {
    string str = "abbaca";
    string finalString = removeAdjacent(str);

    cout << "After removing the duplicates: " << finalString;
}