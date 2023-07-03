// User defined functions for some basic string fuctions 
/*
    1. String length
    2. String Empty
    3. Sub String
*/


#include <iostream>
#include<string.h>
using namespace std;

// Length of string 
int strLen(string str) {
    int i=0;
    while (str[i] != '\0') {
        i++;
    }
    
    return i;
}

// String empty
bool strEmpty(string str) {
    if (str[0] == '\0') {
        return true;
    }
    return false;  
}

string subString(string str, int start, int total) {
    // start -> start of sub string
    // total -> total no of characters to be included in the substring
    
    string sub;
    int j = 0;
    for(int i=start; i<total+1; i++) {
        sub[j] = str[i];
        j++;
    }
    return sub;
}

int main() {
    // Write C++ code here
    string str;
    cout << "Enter the string : ";
    cin >> str;
    
    // cout << "Lenght of stirng is : " << strLen(str) << endl;
    
    // // Empty String
    // if(strEmpty(str)) {
    //     cout << "String empty" << endl;
    // }
    // else {
    //     cout << "Not empty" << endl;
    // } 
    
    // // substring stl                           // 4 indicates no of characters to be included in the substring
    // cout << "Substring is : " << str.substr(2, 4) << endl;    // note that the starting pos is based on index value
    
    int start = 4, total = 3;
    string s = subString(str, start, total);
    cout << "Sub String is : "<< s << endl;
    
}