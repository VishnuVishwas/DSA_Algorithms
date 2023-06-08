#include <iostream> 
using namespace std;

void factorial (int n) {
    int fact = 1;
    if (n == 0) {
        fact = 1;
    }
    else{
        for (int i = n; i > 0; i--) {
        fact = fact * i;
        }
    }

    cout << fact << endl;
}

int main() {
    int n;

    cout << "Enter the value of n : ";
    cin >> n;

    factorial(n);
}
