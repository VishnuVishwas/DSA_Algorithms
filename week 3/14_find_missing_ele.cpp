#include<iostream>
using namespace std;

void missing(int arr[], int size) {
    for(int i=0; i<size; i++ ) {
        int index = abs(arr[i]);

        if(arr[index-1] > 0) {
            arr[index-1] *= -1;
        }
    }

    for(int i=0; i<size; i++) {
        if(arr[i]>0)
            cout << i+1 << " ";
    }
}

int main() {
    int arr[] = {1, 3, 5, 3, 4};
    int size = sizeof(arr)/sizeof(int);

    missing(arr, size);
}