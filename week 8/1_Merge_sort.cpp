#include<iostream>
using namespace std;

void merge(int* arr, int s, int e) {
    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int* left = new int[len1];
    int* right = new int[len2];

    int k = s;
    for(int i=0; i<len1; i++) {
        left[i] = arr[k];
        k++;
    }

    k = mid+1;
    for(int i=0; i<len2; i++) {
        right[i] = arr[k];
        k++;
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while(leftIndex<len1 && rightIndex<len2) {
        if(left[leftIndex] < right[rightIndex]) {
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else{
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }
    
    while(leftIndex<len1){
        arr[mainArrayIndex++] = left[leftIndex++];
    }

    while(rightIndex<len2) {
        arr[mainArrayIndex++] = right[rightIndex++];
    }

}

void mergeSort(int* arr, int i, int j) {
    if(i>=j)
        return;

    int mid = (i+j)/2;
    mergeSort(arr, i, mid);
    mergeSort(arr, mid+1, j);

    merge(arr, i, j);
}

int main() {
    int arr[5] = {8, 9, 5, 1, 10};
    int n = 5;

    int i=0;
    int j=n-1;
    mergeSort(arr, i, j);

    for(int i=0; i<5; i++) {
        cout << arr[i] << " ";
    }
}