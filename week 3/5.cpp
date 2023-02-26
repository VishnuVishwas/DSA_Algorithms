#include <iostream>
using namespace std;

void extremeEle (int arr[], int n) {
    int start = 0;
    int end = n - 1;

    cout << "Extreme elements : " << endl;
        while (start <= end) {
            if (start == end) {
                cout << arr[start];
                break;
            }
            cout << arr[start] ;
            cout << arr[end];
        
            start++;
            end--;
    }
}

int main () {
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

    extremeEle(arr, n);
}