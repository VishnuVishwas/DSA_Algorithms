// House robber : 198
// To rob the many houses to get maximum profit, condition : adjacent houses cannot be robbed

#include<iostream>
#include<vector>
using namespace std;

int robHouse(vector<int> vrr, int i) {

    if(i >= vrr.size() )
        return 0;

    int robAmt1 = vrr[i] + robHouse(vrr, i+2);
    int robAmt2 = 0 + robHouse(vrr, i+1);

    return max(robAmt1, robAmt2);
}

int main() {
    vector<int> vrr{1, 2, 3, 1};

    int maxi = robHouse(vrr, 0);
    cout << "The maximum amt robber is : " << maxi << endl;
}