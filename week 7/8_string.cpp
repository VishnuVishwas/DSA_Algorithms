// find the given char in a string
#include<iostream>
#include<string.h>
using namespace std;

bool findChar(string s, char key, int n, int i) {
    if(i >= n) {
        return false;
    }

    if(s[i] == key) {
        return true;
    }

    return findChar(s, key, n, i+1);
}

int main() {
    string s = "LoveBabbar";
    int i = 0;
    int n = s.size();

    bool isTrue = findChar(s, 'b', n, i);

    if(isTrue) {
        cout << "key found" << endl;
    }
    else {
        cout << "Element not found" << endl;
    }
}