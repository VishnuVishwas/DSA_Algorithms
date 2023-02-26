#include <iostream>
#include <limits.h>
using namespace std;

int maxNum (int arr[], int n) {
    int max = INT_MIN;
    for (int i = 1; i < n; i ++) {
        if (arr[i] > max ) {
            max = arr[i];
        }
    }
    return max;
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

    int max = maxNum (arr, n);

    cout << "\nMaximum value of element is : " << max;
}