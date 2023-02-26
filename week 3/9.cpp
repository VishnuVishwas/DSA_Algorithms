#include <iostream>
using namespace std;

int sortNum (int arr[], int size) {
    int start = 0;
    int end = size - 1;

    cout << "\napproch 1" << endl;
    while (start < end) {
        if (arr[start] == 0) {
            start = start + 1;
        }

        if (arr[end] == 1) {
            end = end - 1;
        }

        if (arr[start] == 1 && arr[end] == 0) {
            swap(arr[start], arr[end]);
            start = start + 1;
            end = end -1;
        }   
    }
    
    cout << "\nElements after sorting : " << endl;
    for (int i = 0; i < 7; i++) {
        cout << arr[i];
    }
}

void sortNum2 (int arr[], int size) {
    int s = 0;
    int e = size -1;
    int i = 0;

    cout << "\napproch 2" << endl;
    while (s <= e) {
        if (arr[i] == 0 ) {
            swap(arr[i], arr[s]);
            s++;
            i++;
        }
        if (arr[i] == 1 ) {
            swap(arr[i], arr[e]);
            e--;
        }

    cout << "Elements after sorting : " << endl;
        for (int i = 0; i < 7; i++) {
            cout << arr[i];
        }
    }
}

int main() {
    int arr[] = {1, 0, 0, 1, 1, 1,0};
    cout << "Elements are : " << endl;
    for (int i = 0; i < 7; i++) {
        cout << arr[i];
    }

    sortNum (arr, 7);
    sortNum2 (arr, 7);
}