#include <iostream>
#include <string.h>
using namespace std;

string removeOccurrences(string s, string part) {
    int pos = s.find(part);
    while (pos != string::npos) {
        s.erase(pos, part.size());
        pos = s.find(part);
    }
    return s;
}

int main() {
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << "Initial string : " << s << endl;

    string finalString = "";
    finalString = removeOccurrences(s, part);
    cout << "Final string : " << finalString << endl;
}