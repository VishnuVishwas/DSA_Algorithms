class Solution {
public:
    int findDuplicate(vector<int>& nums) {

//method 1 --> sorting
    //     sort (nums.begin(), nums.end());

    //     for (int i = 0; i < nums.size() -1; i++) {
    //         if (nums[i] == nums[i+1]) {
    //             return nums[i];
    //             break;
    //         }
    //     }

    //     return-1;


// method 2 --> negative marking method
    //     int ans = -1;
    //     for (int i = 0; i < nums.size(); i++) {

    //         int index = abs(nums[i]);

    //         // check if the number present in array is negative
    //         if (nums[index] < 0) {
    //             ans = index;
    //             break;
    //         }

    //         // if number is not negative mark it as negative
    //         nums[index] *= -1;
    //     }
    // return ans;

// method 3 --> positioning method
    while ( nums[0] != nums[nums[0]] ) {
        swap (nums[0], nums[nums[0]] );
    } 
    return nums[0];
    }
};