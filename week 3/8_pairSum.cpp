// Print all the pairs whoes sum = 9

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int arr[5] = {4, 5, 6, 3, 2};
    for (int i = 0; i < 5; i++ ) {
        for (int j = i+1; j < 5; j++) {
            if (arr[i] + arr[j] == 9) {
                cout << "(" << arr[i] << " , " << arr[j] << ")" << endl;
            }
        }
    } 
    // vector<int> vrr;

    // cout << "Enter the values into vector : ";
    // for (int i = 0; i < 5; i++) {
    //     cin >> vrr[i];
    // }

    // for (int i = 0; i < vrr.size(); i++) {
    //     for (int j = i+1; j < vrr.size(); j++) {
    //             cout << vrr[i] << endl;
    //     }
    // }

    // int sum = 9;
    // for (int i = 0; i < vrr.size(); i++) {
    //     for (int j = i+1; j < vrr.size(); j++) {
    //         if ((vrr[i] + vrr[j]) == sum) {
    //             cout << "(" << vrr[i] << " , " << vrr[j] << ")" << endl;
    //         }
    //     }
    // }


    // code help
//     #include <bits/stdc++.h>

// vector<vector<int>> pairSum(vector<int> &arr, int s){

//    vector<vector<int>> ans;

//    for(int i=0; i<arr.size(); i++){
//       for(int j=i+1; j<arr.size(); j++){
//          if(arr[i] + arr[j] == s){
//             vector<int> temp;
//             temp.push_back(min(arr[i], arr[j]));
//             temp.push_back(max(arr[i], arr[j]));
//             ans.push_back(temp);
//          }
//       }
//    }

//    sort(ans.begin(), ans.end());
//    return ans;

}
}
