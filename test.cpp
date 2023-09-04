#include<iostream>
using namespace std;

int fact(int n, int i, int ans) {
    if(i == n+1)
        return ans;

    ans = ans * i;

    fact(n, i+1, ans);
}

int main() {
    int n=5;

    int ans=1;
    cout << "Answer is: " << fact(n, 1, ans);
}