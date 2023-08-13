// Finding a factorial of a number using recursion

#include<iostream>
using namespace std;

int factorial(int n) {
    // Base condition
    if(n == 1 || n == 0) {
        return n;
    }

    // Processing

    // recursive call
    return n * factorial(n-1);
}

int main() {
    
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int ans = factorial(n);

    cout << "The factorial of number is : " << ans;
}