// Permutation of string : return all the combinations of string

#include<iostream>
using namespace std;

void permutationString(string& str, int i) {
    // base condition
    if(i >= str.length() ) {
        cout << str << " ";
        return;
    }

    // swap
    for(int j=i; j<str.length(); j++ ) {
        swap(str[i], str[j]);                    // swap
        permutationString(str, i+1);             // recursion
        swap(str[i], str[j]);                    // backtracking
    }
}

int main() {
    string str = "abc";

    int i=0;
    permutationString(str, i);
}