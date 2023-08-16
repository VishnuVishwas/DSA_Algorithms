#include<iostream>
using namespace std;

void print(string str, int i, string output) {
    if(i >= str.length()) {
        cout << output << endl;
        return;
    }

    print(str, i+1, output);
    output.push_back(str[i]);
    print(str, i+1, output);
}

int main() {
    string str = "abc";
    int n = str.length();

    string output;

    print(str, 0, output);
}