#include<iostream>
using namespace std;

void sortArr(int arr[]) {
    int i=0, s=0, e=7;
    while(s<=e) {
        if(arr[i] == 0) {
            swap(arr[i], arr[s]);
                i++;
                s++;
            }

        if(arr[i] == 1) {
            swap(arr[i], arr[e]);
                e--;
                i++;
        
    }

    cout << "\nAfter sorting" << endl;
    for(int i=0; i<7; i++) {
        cout << arr[i] << " ";
    }
    }
}

int main() {
    int arr[] = {1, 0, 0, 1, 1, 1, 0};

    cout << "Before Sorting" << endl;
    for(int i=0; i<7; i++) {
        cout << arr[i] << " ";
    }
    sortArr(arr);
}