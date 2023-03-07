#include <iostream>
using namespace std;

int peakElement(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;

    while (start < end) {
        if (arr[mid] > arr[mid+1]) {
            end = mid;
        }

        else if (arr[mid] < arr[mid+1] ) {
            start = mid + 1;
        }

        mid = start + (end - start)/2;
    }

    cout << "\nThe value is present : " << start;
}

int main() {
    int arr[28] = {4, 2, 7, 8, 10, 11, 13, 15, 16, 20, 6, 1};

    cout << "\nElements are : " << endl;
    for (int i = 0; i < 12; i++) {
        cout << arr[i] << " ";
    }

    peakElement(arr, 12);

    return 0;
}