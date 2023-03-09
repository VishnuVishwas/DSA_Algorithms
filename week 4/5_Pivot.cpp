#include <iostream>
#include <vector>
using namespace std;

int pivotEle(vector<int> arr) {
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;

    while(start <= end) {

        // if the array is only sorted or only one element present
        if (start == end) {
            return start;
        }

        // element present at mid
        if (arr[mid] > arr[mid+1]) {
            return mid;
        }

        // element present behind mid
        if(arr[mid-1] > arr[mid]) {
            return mid-1;
        }

        // element at line 'B'
        if (arr[start] > arr[mid]) {
            end = mid-1;
        }

        // element present at line 'A'
        if (arr[start] < arr[mid] ) {
            start = mid+1;
        }

        // updating mid
        mid = start + (end-start)/2;
    }

    // element not found
    return -1;
}

int main () {
    vector <int> arr{24, 65, 1, 3, 4, 5, 6, 7};

    int index = pivotEle (arr);

    if (index == -1) {
        cout << "Element not found" <<endl;
    }
    else {
        cout << "Element found at index : " << index << endl;
        cout << "Element is : " << arr[index] << endl;
    }

    return 0;
}