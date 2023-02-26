#include <iostream>
#include <vector>
using namespace std;

int bubbleSort(vector<int> nums) {
    for (int rounds = 0; rounds < nums.size() - 1; rounds++) {


        for (int j = 0; j<(nums.size()-rounds); j++) {
            if (nums[j] > nums[j+1]) {
                swap(nums[j], nums[j+1]);

            }
        }
    }

    cout << "After sorting" << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}

int main() {
    vector<int> nums{10, 1, 7, 6, 14, 9};

    bubbleSort(nums);
}