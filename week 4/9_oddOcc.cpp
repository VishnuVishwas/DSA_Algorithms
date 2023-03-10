// given an array containing all even pairs expect one 
// same pairs are not adjecently placed

#include <iostream>
#include <vector>
using namespace std;

int oddOcc (vector<int> arr) {
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;

    while(start <= end ) {
        if (start == end) {
            return start;
        }

        // if mid is present in odd index
        if (mid%2 == 0 ) {
            if (arr[mid] == arr[mid+1] ) {    // element present at right side
                start = mid + 2;
            }
            else {
                end = mid;                    // element may be present or left side
            }
        }

        else {      //if (mid % 2 != 0)
            if (arr[mid] == arr[mid-1] ) {    // element present at right side
                start = mid + 1; 
            }
            else {
                end = mid-1;                  // element cannot be present at this pos, so its left search
            }
        }

    mid = start+(end-start)/2;
    }

    return -1;
}

int main() {
    vector<int> arr {1,1,2,2,3,4,4,5,5,6,6,7,7};

    int index = oddOcc(arr);
    
    cout << "The index : " << index << endl;
    cout << "Element is : " << arr[index] << endl;
}