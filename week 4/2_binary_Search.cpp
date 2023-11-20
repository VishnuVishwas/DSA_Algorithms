#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;

    while(start <= end) {
        if(arr[mid] == key){
            return mid;
        }
           
        else if(key < arr[mid]) {
            end = mid-1;
        }
            
        else if(key > arr[mid]){
            start = mid+1;
        }
        mid = (start+end)/2;
    }

    return -1;
}

int main() {
    int arr[] = {3, 11, 12, 36, 43, 53};
    int size = sizeof(arr)/sizeof(int);
    cout << "size is : " << size << endl;

    int key = 53;
    cout << "The element is present at : " << binarySearch(arr, size, key);
}