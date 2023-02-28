#include <iostream>
#include <vector>
using namespace std;

int pivotEle(vector<int> arr) {
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(mid + 1 < arr.size() && arr[mid]>arr[mid+1]){ // mid + 1 < arr.size() so that valid index
            return mid;
        }
        if(mid - 1>=0 && arr[mid-1]>arr[mid]){ // mid - 1 >=0 so that valid index
            return mid-1;
        }
        if(arr[s]>=arr[mid]){
            e = mid - 1; // search in left array
        }
        else if(arr[s]<arr[mid]){
            s = mid; // search in right array
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main() {
    // creating a vector
    vector<int> nums{3,4,5,6,7,1,2};
    int element = pivotEle(nums);

    cout << "pivot element is : " << element;
}