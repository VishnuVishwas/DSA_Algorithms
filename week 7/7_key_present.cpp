// to check the key element present or not

#include<iostream>
#include<vector>
using namespace std;

bool findKey(vector<int> vrr, int n, int i, int key) {

    if(i >= n) 
        return false;

    if(vrr[i] == key)                   
        return true;

    return findKey(vrr, n, i+1, key);
}

int main() {
    vector<int> vrr {5, 8, 3, 9, 4};
    
    int n = vrr.size();
    int key = 99;

    int i = 0;

    bool flag = findKey(vrr, n, i, key);

    if(flag) 
        cout << "Key present" << endl;
    else  
        cout << "Key not present" << endl;
}