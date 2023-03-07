#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;

    while (start <= end) {
        if (key == arr[mid]) {
            return mid;
        }

        else if (key < arr[mid] ) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }

        mid = start + (end - start)/2;
    }

    return -1;
}

int main() {
    int arr[28] = {4, 2, 7, 20, 211, 231};
    int key;

    cout << "Enter the key : ";
    cin >> key;

    cout << "\nElements are : " << endl;
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    int index = binarySearch(arr, 6, key);

    if (index == -1) {
        cout << "\nElement not found";
    }

    else {
        cout << endl << key << " found at : " << index;
    }

    return 0;
}