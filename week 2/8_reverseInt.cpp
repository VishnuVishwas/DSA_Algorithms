#include <iostream>
using namespace std;

int reverseInteger (int num) {

    int n = num;
    int sum = 0;

    while (n > 0) {
        int rem = n%10;
        sum = sum*10 + rem;
        n = n/10;
    }
    return sum;
}

int main() {
    int num;

    cout << "Enter the number : " << endl;
    cin >> num;

    int number = reverseInteger (num); 

    cout << number <<endl;
}