// Selection sort

#include <iostream>
#include <vector>
using namespace std;

int selectionSort (vector<int> nums) {
    
    for (int rounds = 0; rounds < nums.size() -1; rounds++) {
        int minIndex = rounds;

        for(int j = rounds+1; j < nums.size(); j++) {
            if ( nums[minIndex] > nums[j] ) {
                minIndex = j;
            }
        }

        if (minIndex != rounds){
        swap(nums[minIndex], nums[rounds]);
    }
}

    //printing
    cout << " After sorting" << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}

int main() {
    vector<int> nums {9, 8, 3, 4, 7, 6};

    selectionSort (nums);
}