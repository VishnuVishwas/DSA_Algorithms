/* 
    Given a array, we need to return paris who's difference is equal to K
    Example : arr[5] = {1, 3, 1, 4, 5}
              Given k = 2
              return = 1

    conditions : Pairs should not repeat
                 return no.of pairs 
*/

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int BinarySearch(vector<int> nums, int start, int value);

int kDiffPairs(vector<int> nums, int size, int k) {

    // Method 1: Brute force    TC : O(n^2)

/*
    set <pair <int, int>> ans;
    for (int i=0; i<size; i++) {
 
        for (int j =i+1; j<size; j++) {
            if ( abs(nums[i]-nums[j]) == k) {
                ans.insert({nums[i], nums[j]});
                cout << "The pairs are : " << nums[i] << " " << nums[j] << endl;
            } 
        }
    }
    return ans.size();          
*/                                  // the pairs might repeat in this method


    // method 2: Two pointer approach 
/*
    sort(nums.begin(), nums.end());
    int i=0;
    int j=i+1;

    set<pair<int, int>> ans;

    while (i<j) {
        int value = nums[j]-nums[i];
        
        if(value == k) {
            ans.insert({nums[i], nums[j]});
            cout << "The pairs are : " << nums[i] << " " << nums[j] << endl; 
            i++;
            j++;
        }

        else if (value > k) {
            i++;
        }

        else if (value < k) {
            j++;
        }
    }

    return ans.size(); 

*/


// Method3 : Appling Binary Search On Sorted Array

    sort(nums.begin(), nums.end());

    set<pair<int, int> > ans;

    for (int i=0; i<nums.size(); i++) {

        if(BinarySearch(nums, i+1, nums[i]+k != -1)) {
            // cout << "The pairs are : " << nums[i] << " " << nums[i]+k << endl;
            ans.insert({nums[i], nums[i]+k});
        }
    }

    for (int i=0; i<ans.size(); i++) {
    cout << ans;
    }


    return ans.size();
}

int main() {
    vector<int> nums { 1, 3, 1, 4, 5, 6, 7};

    cout << "Number of K Diff paris is : " << kDiffPairs(nums, nums.size(), 2);
}


int BinarySearch(vector<int> nums, int start, int value) {
    int end=nums.size()-1;

    while (start <= end) {
        int mid = (start+end)/2;

        if(nums[mid] == value) {
            return mid;
        }

        else if (nums[mid] < value) {
            start = mid+1;
        }

        else {
            end = mid-1;
        }
    }

    return -1;
}
