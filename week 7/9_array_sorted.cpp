#include<iostream>
#include<vector>
using namespace std;

bool sortedArray(vector<int> vrr, int n, int i){
    if(i > n)
        return true;
    
    if(vrr[i] > vrr[i+1] ) {         // checking with next element
        return false;
    }

    return sortedArray(vrr, n, i+1);
}

int main() {
    vector<int> vrr {1, 2, 3, 4, 5};
    int n = sizeof(vrr)/sizeof(int);

    if(sortedArray(vrr, n, 0)) {
        cout << "Sorted";
    }
    else
        cout << "Not sorted";
}