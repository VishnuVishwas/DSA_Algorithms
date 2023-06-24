// Exponential Search for Binary Search
// Note that we know the value of n in this array : i.e for bound index

#include<iostream>
using namespace std;

int binarySearch(int arr[], int i, int j, int x) {
    while (i<=j) {
        int mid=(i+j)/2;

        if(x == arr[mid]) {
            return mid;
        } 
        else if(x < arr[mid]) {
            j = mid-1;
        }
        else {
            i = mid+1;
        }
    }

    return -1;
}

int expoSearch(int arr[], int n, int x) {
    if(arr[0] == x) {
        return 0;
    }

    int i=1;
    while(i<n && arr[i]<=x) {
        i = i * 2;
    }

    return binarySearch(arr, i/2, min(i, n-1), x);
}

int main() {
    int arr[] = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x = 13;

    int index = expoSearch(arr, n, x);
    cout << "The index of " << x << " is " << index;
}