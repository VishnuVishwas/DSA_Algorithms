#include<iostream>
using namespace std;

int reverseNumbers(int n) {
    if (n == 0) {
        return 1;
    }

    cout << n;

    return reverseNumbers(n-1);

}

int main() {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    reverseNumbers(n);

}