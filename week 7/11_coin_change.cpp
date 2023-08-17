// coin change problem -> minimum cost to reach target

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int coinChange(vector<int> vrr, int target) {
    if(target == 0)                             // valid condition
        return 0;
    
    if(target < 0)                              // invalid condition
        return INT_MAX;

    int mini = INT_MAX;

    for(int i=0; i<vrr.size(); i++) {
        int ans = coinChange(vrr, target-vrr[i]);       

        if(ans != INT_MAX) {
            mini = min(mini, ans+1);
        }
    }
    
    return mini;
}

int main() {
    int n;

    int i =  0;
    vector<int> vrr {1, 2};
    int target = 5;

    int mini = coinChange(vrr, target);
    cout << "The minimun cost is : " << mini;
}