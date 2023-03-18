// to check the given array is sorted or not

#include<iostream>
using namespace std;

bool checkSorted(int* arr, int n, int i) {
    if( i >= n) {
        return true;
    }

    if(arr[i] > arr[i+1] ) {
        return false;
    }

    return checkSorted(arr, n, i+1);
}

int main() {
    int arr[10];

    cout << "Enter the elements into array : ";
    for(int i=0; i<5; i++) {
        cin >> arr[i];
    }
    cout << endl;

    bool flag = checkSorted(arr, 5, 0); 

    if(flag) {
        cout << "Array is sorted" << endl;
    }

    else {
        cout << "Array not sorted" << endl;
    }
    
    return 0;
}