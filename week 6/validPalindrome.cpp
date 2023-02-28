#include <iostream>
#include <string.h>
using namespace std;

bool checkPalindrome(string s, int i, int j) {
    
    while (i <= j) {
        if (s[i] == s[j] ) {
            i++;
            j--;
        }
        else {
            return false;
        }
    }
    return true;
}

bool validPalindrome(string s) {
    int i = 0;
    int j = s.size() - 1;

    while (i < j) {
        if (s[i] != s[j] ) {
            return (checkPalindrome(s, i+1, j) || checkPalindrome(s, i, j-1));
        }
        else {
            i++;
            j--;
        }
    }
    return true;
}

int main() {
    string s = "abca";

    bool flag = validPalindrome(s);

    if (flag == true) {
        cout << "The given string is a valid palindrome";
    }
    else {
        cout << "The entered string is not a valid palindrome ";
    }
}

