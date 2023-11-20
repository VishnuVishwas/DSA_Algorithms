// Find 1st repeating element in array

#include<iostream>
#include <unordered_map>
#include<map> 
using namespace std;

int firstRepeating(int arr[], int size) {
    map<int, int> m;

    for(int i=0; i<size; i++) {
        m[arr[i]]++;
    }

    for(int i=0; i<size; i++) {
        if(m[arr[i]] > 1) {
            return i+1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 7 ,3, 4, 5, 5, 6};
    int size = sizeof(arr)/sizeof(int);

    cout << "The first repeating element is : " << firstRepeating(arr, size);
}