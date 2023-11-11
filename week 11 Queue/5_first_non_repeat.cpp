// First non-repeating char in a string
/*
    input : "a a b b"
    output : "a # b b"      use "#" when the stack is empty
*/

#include<iostream>
#include<queue>
using namespace std;

string solve(string str) {

    int freq[26] = {0};
    queue<char> q;
    string ans="";

    for(int i=0; i<str.length(); i++) {
        char ch = str[i];
        freq[ch-'a']++;
        q.push(ch);
  
        while(!q.empty()) {
            if(freq[q.front()-'a'] > 1) {
                q.pop();
            }
            else {
                ans.push_back(q.front());
                break;
            }
        }

        if(q.empty()) {
            ans.push_back('#');
        }
    }
    return ans;
}

int main() {
    string str="aabc";
    cout << solve(str);
}