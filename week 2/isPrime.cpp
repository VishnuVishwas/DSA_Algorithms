#include <iostream>
using namespace std;

bool primeNumber (int n) {
    if (n < 2) {
        return -1;
    }

    else {
        for (int i = 2; i < n; i++) {
            if (n%i == 0) {
                return false;
            }
        }
        return true;
    }

}
  
int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    bool isPrime = primeNumber(n);

    for (int i = 2; i < n; i++) {
        if (isPrime) {
            cout << i << " ";
        }
    }
}