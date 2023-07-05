// Return all possible palindromic string 

#include <iostream>
using namespace std;

int substringCount(string s, int i, int j) {
    int count = 0;

    // pointers are moving outwards
    if (i >= 0 && j <s.length() && s[i]==s[j]) {
        count ++;
    }
    else  {
        return false;
    }

    return count;
}

int main() {
    string s = "noon";

    // to store the no.of substrings
    int total_sum = 0;

    // traverse through each element 
    for (int i = 0; i < s.length(); i++) {

        // even sum
        int even_sum = substringCount(s, i, i+1);
        total_sum = total_sum + even_sum;

        // odd sum
        int odd_sum = substringCount(s, i, i);
        total_sum = total_sum + odd_sum;
    }

    cout << "Total number of palindrome is : " << total_sum << endl; 
}