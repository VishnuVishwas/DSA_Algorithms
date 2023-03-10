#include <iostream>
using namespace std;

int firstOcc (int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while (start <= end) {
        if (key == arr[mid]) {
            ans = mid;
            end = mid - 1;
        }

        else if (key < arr[mid] ) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }

        mid = start + (end - start)/2;
    }
    cout << "\nThe element present at : " << ans;
}

int lastOcc (int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while (start <= end) {
        if (key == arr[mid]) {
            ans = mid;
            start = mid + 1;
        }

        else if (key < arr[mid] ) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }

        mid = start + (end - start)/2;
    }
    cout << "\nThe element present at : " << ans;
}

int main() {
    int arr[1990] = {3, 4, 8, 8, 8, 8 ,8, 23, 34, 45};
    int key;

    cout << "Enter the key : ";
    cin >> key;

    cout << "\nElements are : ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    int size;

    firstOcc(arr, size = 10, key);
    lastOcc(arr, size = 10, key);

    return 0;   
}