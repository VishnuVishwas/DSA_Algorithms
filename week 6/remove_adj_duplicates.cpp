// 1047. Remove All Adjacent Duplicates In String

// Input: s = "azxxzy"
// Output: "ay"


#include <iostream>
#include <vector>
using namespace std;

string removeDuplicates (string s) {
    int i = 0;
    string ans = "";

    while (i < s.length() ) {
        if ( ans.length() > 0 && ans[ans.length()-1] == s[i]) {
            ans.pop_back();
        }
        else {
            ans.push_back(s[i]);
        }
    i++;
    }
    return ans;
}

int main() {
    string s = "azxxzy";
    cout << " String before removing duplicates is : " << s << endl; 

    string new1 = "";
    new1 = removeDuplicates(s);
    cout << " String after removing duplicates is : " << new1 << endl; 
}