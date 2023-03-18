#include<iostream>
#include<limits.h>
using namespace std;

void maxEle(int* arr, int n, int i, int& max)  {
    // Base case
    if (i >= n) {
        return;
    }

    // processing
    if(arr[i] > max) {
        max = arr[i];
    }

    // recursion call
    return maxEle(arr, n, i+1, max);
}

int main() {
    int arr[10] = {2, 4, 6, 11, 1, 7};
    int n = 6, i = 0;
    int max = INT_MIN;

    maxEle(arr, n, i, max);

    cout << "The max ele is : " << max << endl;
}
