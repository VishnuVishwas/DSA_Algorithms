#include <iostream>
using namespace std;

    bool isAnagram(string s, string t) {
        int hashTable[256] = {0};

        if (s.length() != t.length()) {
            return false;
        }

        for (int i = 0; i < s.size(); i++) {
            hashTable[s[i]]++;
        }

        for (int j = 0; j < t.size(); j++) {
            hashTable[t[j]]--;
        }

        for (int i = 0; i < 256; i++) {
            if (hashTable[i] != 0 ) {
                return false;
            }
        }
        return true;
    }

int main() {
    string s = "anagram";
    string t = "nagaram";

    bool flag = isAnagram(s, t);

    if(flag == true) {
        cout << "Valid anagaram" << endl;
    }
    else {
        cout << "Invalid anagaram";
    }
    return 0;
}