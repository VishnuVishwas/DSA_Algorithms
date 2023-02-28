#include <iostream>
#include <vector>
using namespace std;

int peakEle(vector<int> nums) {
    int s = 0;
    int e = nums.size()-1;
    int mid = s + (e - s)/2;

    while (s < e) {
        // i.e element is present at right of array
        if (nums[mid] < nums[mid+1]) {
            s = mid + 1;
        }

        // peak element might be present or at right 
        else {
            e = mid;
        }
    mid = s + (e - s)/2;
    }
    return s;
}

int main() {
    // creating a vector
    vector<int> nums{1, 2, 3, 4, 7, 6, 5};

    int element = peakEle(nums);

    cout << "Peak element is : " << element;
}