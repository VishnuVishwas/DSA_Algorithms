// add 2 strings 
// you must not convert the inputs to integers directly

#include<iostream>
#include<algorithm>
using namespace std;

void addStrings(string& num1, int i, string& num2, int j, string& ans, int carry) {

    if(i<0 && j<0) {
        if(carry != 0) {
            ans.push_back(carry + '0');
        }
        return;
    }

    int n1 = (i >= 0 ? (num1[i]) : '0') - '0';
    int n2 = (j >= 0 ? (num2[j]) : '0') - '0';
    
    int totalSum = n1 + n2 + carry;

    int digit = totalSum%10;
    carry = totalSum/10;
    ans.push_back(digit + '0');

    addStrings(num1, i-1, num2, j-1, ans, carry);
}

int main() {
    string num1 = "456";
    string num2 = "77";

    string ans = "";

    addStrings(num1, num1.size()-1, num2, num2.size()-1, ans, 0);

    reverse(ans.begin(), ans.end());
    cout << "The of the two strings is : " << ans << endl;
}