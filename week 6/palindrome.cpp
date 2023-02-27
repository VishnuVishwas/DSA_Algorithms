#include <iostream>
#include <string.h>
using namespace std;

bool palindrome(char names[]) {
    int n = strlen(names);
    int i = 0; 
    int j = n-1;

    while (i<=j) {
        if (names[i] == names[j]) {
            i++;
            j--;
        }

        else {
            return false;
        }
    }
    return true;
}

int main() {
    char names[100] = "noon";

    bool flag = palindrome(names);

    if (flag == true) {
        cout <<"The given string is a palindrome" << endl;
    }
    else {
        cout << "The given string is not a palindrome" << endl;
    }
}