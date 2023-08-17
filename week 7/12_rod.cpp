// rod into 3 segements, where x,y and z are given so that you get max segements

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(int n, int x, int y, int z) {
    if(n == 0) 
        return 0;
    
    if(n < 0) 
        return INT_MAX;

    int ans1 = solve(n-x, x, y, z) + 1;
    int ans2 = solve(n-y, x, y, z) + 1;
    int ans3 = solve(n-z, x, y, z) + 1;

    int maxi = max(ans1, max(ans2, ans3));

    return maxi;
}

int main() {
    int n = 7;
    int x = 5;
    int y = 2; 
    int z = 2;

    int maxi = solve (n, x, y, z);
    cout << "The maximum no of segments that can be partitioned is : " << maxi;
}