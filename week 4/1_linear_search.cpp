#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for(int i=0; i<size; i++) {
        if(arr[i] == key)   
            return i;
    }
    // if not found
    return -1;
} 


int main() {
    int arr[] = {3, 2, 11, 56, 23, 33};
    int size = sizeof(arr)/sizeof(int);

    int key =  23;
    cout << "Element present at: " << linearSearch(arr, size, key);
}