#include <iostream>
#include <vector>
using namespace std;

void printArr(int arr[], int n, int i ) {
// Base case
    if(i >= n) {
        return;
    }

//   processing
    cout << arr[i] << " ";

// Recursion call
    return printArr(arr, n, i+1);
}

// void printArr2(int arr[], int n) {
// // Base case
//     if(n==0) {
//         return;
//     }

// //   processing
//     cout << arr[0] << " ";

// // Recursion call
//     return printArr(arr[]+1, n-1);
// }

int main() {
    int arr[89] = {10, 20, 30, 40, 50};
    int n = sizeof(arr);
    int i = 0;

    printArr(arr, 5, i);
    //printArr2(arr, n);
}