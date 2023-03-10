#include <iostream>
#include <vector>
using namespace std;

int sqrrt(int n) {
    int start = 0;
    int end = n;   
    int mid = start + (end - start)/2;
    int target = n;
    int ans = -1;

    while (start <= end ) {
        if (mid*mid == target) {
            return mid;
        }

        else if (mid*mid < target) {
            ans = mid;
            start = mid + 1;    
        }

        else {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number : ";
    cout << endl;
    cin >> n;

    double sqroot = sqrrt(n);

    cout << "Square root of " << n << " is " << sqroot << endl; 

    int precision = 5;
    int fianlAns = sqroot;
    double step = 0.1;

    for (int i = 1; i <= precision; i++) {
        for (double j = sqroot; j*j <= n; j = j+step) {
            fianlAns = j;
        }
        step = step/10;
    }

    cout << "Precise answer : " << fianlAns;
}