// reverse a original string using recursion

#include<iostream>
using namespace std;

void strRev(string& str, int i, int j) {

    if(i >= j)
        return;
    
    swap(str[i], str[j]);

    strRev(str, i+1, j-1);
}

int main() {
    string str = "abecd";

    strRev(str, 0, str.size());

    cout << "Reveresed string is : " << str; 
}
