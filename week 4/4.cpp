#include <iostream>
#include <vector>
using namespace std;

int peakEle (vector<int> nums) {
    int start = 0;
    int end = nums.size() - 1;

    int mid = start + (end - start)/2;

    while (start < end) {
        if ( (mid + 1 <= end) && (nums[mid] < nums[mid + 1])) {
            start = mid + 1;
        }

        else if( (mid - 1 <= start) && (nums[mid] > nums[mid + 1])){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int main() {
    vector<int> nums {0,10,5,2};

    int index = peakEle (nums);
    
    cout <<" present at : " << index << endl;
}