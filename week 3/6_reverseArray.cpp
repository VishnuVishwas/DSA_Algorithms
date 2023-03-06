#include <iostream>
using namespace std;

void revArr (int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "\nReverse array elements are : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
int n;

    cout << "Enter the number of elements : " ;
    cin >> n;

    int arr[100];
    cout << "Enter the values into the array : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are : " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";

    }

    revArr (arr, n);
}