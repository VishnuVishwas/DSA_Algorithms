// print digits of a number sepratly
#include<iostream>
using namespace std;

void digitPrint(int n) {
    if(n == 0) {
        return;
    }

    int ans = n%10;
    digitPrint(n/10);

    cout << ans << endl;
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    digitPrint(n);
}