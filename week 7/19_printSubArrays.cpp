// print all the subarrays 

#include<iostream>
#include<vector>
using namespace std;

void PrintSubarray(vector<int>& nums, int i, int j) {
    if (j == nums.size())
        return;

    for(int start=i; start<=j; start++) 
        cout << nums[start];
    cout << endl;

    PrintSubarray(nums, i, j+1);
}

int main() {
    vector<int> nums {1, 2, 3, 4, 5};

    for(int i=0; i<nums.size(); i++) {
        int j = i;
        PrintSubarray(nums, i, j);
    }
    
}