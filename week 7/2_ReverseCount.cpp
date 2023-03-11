#include<iostream>
using namespace std;

void reverseNumbers(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    return reverseNumbers(n-1);

}

int main() {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    reverseNumbers(n);

}