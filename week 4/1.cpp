// Linear search

#include <iostream>
using namespace std;

int linearSearch (int arr[], int size, int key) {
    
    for (int i = 0; i < size; i++) {
        if (key == arr[i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[10] = {5, 2, 7, 1, 9}, key;

    cout << "Enter the key : " << endl;
    cin >> key;

    int index = linearSearch (arr, 5, key);

    if (index == -1 ) {
        cout << "Element not found";
    }
    else {
        cout << key << " present at : " << index;
    }
}