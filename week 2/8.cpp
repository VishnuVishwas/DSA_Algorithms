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

    if (isPrime){
        cout << n << " is prime";
    }
    else {
        cout << n << " is not a prime";
    }
}