#include<iostream>
using namespace std;

void moveNegative(int arr[], int size) {
    int i=0;
    int l=0;
    int h = size-1;

    while(l<h) {
        if(arr[i] < 0) {
            swap(arr[i], arr[l]);
            i++;
            l++;
        }
        else{
            swap(arr[i], arr[h]);
            h--;
        }
    }
}

int printDuplicate(int arr[], int size) {
    
    for(int i=0; i<size; i++) {
        int index = abs(arr[i]);
        if(arr[index] < 0) 
            return index;

        arr[index] = arr[index] * -1;
    }
}

int main() {
    int arr[] = {1, 3, 1, 4, 2};
    int size = sizeof(arr)/sizeof(int);

    cout << "The duplicate number is :  " << printDuplicate(arr, size) << endl;

    // moveNegative(arr, size);
    // for(int i=0; i<size; i++) {
    //     cout << arr[i] << " ";
    // }
}