#include <iostream>
using namespace std;

int linearSearch  (int arr[], int n, int key) {
    
    for (int i = 0; i < n; i++ ){
        if (key == arr[i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;

    cout << "Enter the number of elements : ";
    cin >> n;

    int arr[100];
    cout << "Enter the values into the array : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";

    }

    int key;
    cout << "Enter the key : ";
    cin >> key;

    int index = linearSearch(arr, n, key);

    if (index == -1) {
        cout << "Element not present";
    }
    else {
        cout << key << " present at index : " << index; 
    }

    return 0;
}