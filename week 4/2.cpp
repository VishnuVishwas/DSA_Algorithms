// Binary search 

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int binarySearch (int arr[], int size, int key) {
    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;

    while (s <= e) {
        if (key == arr[mid]) {
            return mid;
        }

        if (key < arr[mid] ) {
            e = mid - 1;
        }

        else {
            s = mid + 1;
        }
        
        mid = s + (e-s)/2;
    }
    return -1;
}

void binarySearch2 (vector<int> v, int key) {
    //STL function 

    if (binary_search(v.begin(), v.end(), key)) {
        cout << "Found" << endl;
    }
    else {
        cout << "Not found" << endl;
    }
}

int main() {
    int arr[10] = {12, 45, 56, 65, 77}, key;
    vector<int> v {45, 88, 89, 90, 98, 99};

    cout << "Enter the key: ";
    cin >> key;

    // STL function 
    binarySearch2(v, key);

    // Standard witten function
    int index = binarySearch(arr, 5, key);

    if (index == -1 ) {
        cout << "Element not found" << endl;
    }
    else {
        cout << key << " present at : " << index << endl;
    }
}