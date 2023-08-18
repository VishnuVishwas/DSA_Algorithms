// palindrome check using recurssion

#include<iostream>
using namespace std;

bool palindromeCheck(string str, int i, int j){
    if(i >= j) {
        return true;
    }

    if(str[i] != str[j] ) 
        return false;

    return palindromeCheck(str, i+1, j-1);
}

int main() {
    string str = "racecar";

    bool check = palindromeCheck(str, 0, str.size()-1);
    if(check)
        cout << "It is a palindrome " << endl;
    else 
        cout << "Not a palindrome " << endl; 
        
}