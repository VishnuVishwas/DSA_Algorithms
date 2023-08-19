// Remove all occurrences of a substring : 1910

#include<iostream>
using namespace std;

void removeSub(string& str, string& part) {

    // find the position of substring
    int found = str.find(part);

    if(found != string::npos){
        string left_string = str.substr(0, found);
        string right_string = str.substr(found+part.size(), str.size());

        str = left_string + right_string;

        removeSub(str, part);
    }

    else {  
        // base condition : part not found
        return;
    }

}

int main() {
    string str = "aaaaabcbcabdc";
    string part = "abc";

    removeSub(str, part);

    cout << str;
}