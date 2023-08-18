// to find the last most occurrence of char in a string 

#include<iostream>
#include<limits.h>
using namespace std;

void lastOccLTR(string& str, int i, char key, int& ans) {

    if(i >= str.size()) 
        return;

    if(str[i] == key) {
        ans = i;
    }

    lastOccLTR(str, i+1, key, ans);
}

void lastOccRTL(string& str, int i, char key, int& ans) {

    if(i < 0) 
        return;

    if(str[i] == key) {
        ans = i;
        return;
    }

    lastOccRTL(str, i-1, key, ans);
}

int main() {

    string str = "abcddedf";
    char key = 'd'; 

    int ans = -1;

    //lastOccLTR (str, 0, key, ans);
    lastOccRTL (str, str.size()-1, key, ans);

    cout << "Key present at " << ans<< endl;

}