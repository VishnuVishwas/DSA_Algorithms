// Climb stairs
/* 
  Conditions
    1 step at a time
    2 steps at a time
*/

// find the numbers of ways to reach nth step

#include <iostream>
using namespace std;

int climbStairs (int n) {
    if (n==0 || n==1) {
        return 1;
    }

    return climbStairs(n-1) + climbStairs(n-2);
}

int main () {
    int n;

    cout << "Enter the number of steps : ";
    cin >> n;

    int total = climbStairs(n);
    cout << "Total no.of steps is : " << total << endl;
}