// Maximum sum of non adjacent element

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void solve(vector<int> vrr, int i, int sum, int& maxi) {
    if(i >= vrr.size()){
        maxi = max(sum, maxi);
        return;
    }
        
    solve(vrr, i+2, sum+vrr[i], maxi);
    solve(vrr, i+1, sum, maxi);
}

int main() {
    vector<int> vrr{2, 1, 4, 9};
    int n = vrr.size();

    int maxi = INT_MIN;
    int sum = 0;
    int i = 0;

    solve(vrr, i, sum, maxi);
    cout << "Maximum of : " << maxi;
}