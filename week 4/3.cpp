#include <iostream>
#include <vector>
using namespace std;

int firstOccurence (vector<int> nums, int target) {
    int start = 0;
    int end = nums.size() - 1;

    int mid = start + (end-start)/2;
    int ans = -1;

    while (start <= end) {
        if (target == nums[mid]) {
            ans = mid;
            end = mid - 1;
        }

        else if (target < nums[mid]) {
            end = mid - 1;
        }

        else {
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOccurence (vector<int> nums, int target) {
    int start = 0;
    int end = nums.size() - 1;

    int mid = start + (end-start)/2;
    int ans = -1;

    while (start <= end) {
        if (target == nums[mid]) {
            ans = mid;
            start = mid + 1;
        }

        if (target < nums[mid]) {
            end = mid - 1;
        }

        else {
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
   vector<int> nums{1, 3, 5, 5, 5, 5, 67, 123, 125};
   int target = 5;

   int firstIndex = firstOccurence(nums, target);
   int lastIndex = lastOccurence(nums, target);

   if (firstIndex == -1 && lastIndex == -1) {
    cout << "Element not found";
   }

   else {
    cout << "The first index of element is : " << firstIndex << " and last index is : " << lastIndex << endl;
   }

   int totalOcc = lastIndex - firstIndex + 1;
   cout << "The total number of occurences is " << totalOcc;

}