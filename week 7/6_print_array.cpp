// printing the array elements from 0 -> n-1

#include<iostream>
using namespace std;

void printArray(int arr[], int n, int i) {
    
    if(i >= n) {             // all elements are traversed
        return;
    }

    cout << arr[i] << " ";    

    printArray(arr, n, i+1);     
}

void printArray2(int arr[], int n) {
    if(n == 0) 
        return;

    cout << arr[0] << " ";        

    printArray2(arr+1, n-1);
    
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) /sizeof(int);
    int i = 0;

    printArray(arr, n, i);
    cout << endl;
    printArray2(arr, n);

}