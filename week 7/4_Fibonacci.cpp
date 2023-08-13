// fibonacci Series using recursion

#include<iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;

    cout << "Enter the value n : ";
    cin >> n;

    int ans = fibonacci(n);
    cout << ans;
}