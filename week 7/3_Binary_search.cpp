// Binary Search using recursion

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> vrr, int key, int start, int end) {
    // base case
    if (start > end ) {
        return -1;
    }

    int mid = (start + end)/2;
    if(key == vrr[mid]) 
        return mid;
    
    else if (key < vrr[mid]) 
        return binarySearch(vrr, key, start, mid-1);

    else 
        return binarySearch(vrr, key, mid+1, end);

}

int main() {
    
    int value;
    vector<int> vrr;

    cout << "Enter the values into vector : ";
    for(int i=0; i<6; i++) {
        cin >> value;
        vrr.push_back(value);
    }

    int key = 7;

    int index = binarySearch(vrr, key, 0, vrr.size());
    cout << "The index of " << key << " is " << index;

}