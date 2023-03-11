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

int binarySearch(vector<int> arr, int start, int end, int target){

    int mid = start + (end-start)/2;

    while (start <= end) {
        if (target == arr[mid]) {
            return mid;
        }

        else if (target < arr[mid] ) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }

        mid = start + (end - start)/2;
    }

    return -1;
}

int main () {
    vector <int> arr{24, 65, 1, 3, 4, 5, 6, 7};
    int target = 6;

    // finding pivot index
    int pivotIndex = pivotEle (arr);

    // finding the element
    if (target >= 0 && target <= arr[pivotIndex] ) {
        int ans = binarySearch(arr, 0, pivotIndex, target);
        cout << "The element present at index : " << ans;
    }

    else {
        int ans = binarySearch(arr, pivotIndex+1, arr.size()-1, target);
        cout << "The element present at index : " << ans;
    }

    return 0;
}