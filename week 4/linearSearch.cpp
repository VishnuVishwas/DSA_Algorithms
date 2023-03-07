// Linear search

#include <iostream>
#include <vector>
using namespace std;

void linearSearch(int *a, int key) {

    bool flag = false;
    for (int i = 0; i < 6; i++) {

        if ( key == a[i] ) {
            cout << "\nElement found at : " << i;
            flag = true;
        }
    }

    if (flag == false) {
        cout << "\nElement not found";
    }
}

int main() {
    int arr[100] = {3, 6, 7, 10, 33, 67};
    int key;

    cout << "\nEnter the key : ";
    cin >> key;

    cout << "\nBefore sorting : ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    linearSearch (arr, key);
}