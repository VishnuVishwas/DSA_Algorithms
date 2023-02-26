#include <iostream>
using namespace std;

int primeNumber (int n) {
    if (n < 2) {
        return -1;
    }

    else {
        for (int i = 2; i <= n; i++) {
            if (n%i == 0) {
                return -1;
            }
        }
        return 0;
    }
}
  
int main() {
    int n;

    cout << "Enter the number : ";
    cin >> n;

    int number = primeNumber(n);

    if (n == -1 ){
        cout << n << " is Not prime";
    }
    else {
        cout << n << " is prime";
    }
}