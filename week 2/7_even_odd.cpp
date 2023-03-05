// given number is even or odd
#include <iostream>
using namespace std;

void oddEven (int num ) {
    if (num % 2 == 0) {
        cout << num << " is even " << endl;
    } 

    else {
        cout << num << " is odd" << endl;
    }
}

void oddEven2 (int num ) {
    if (num & 1 == 0) {
        cout << num << " is even " << endl;
    } 

    else {
        cout << num << " is odd" << endl;
    }
}

int main() {
    int num;

    cout << "Enter the number : ";
    cin >> num;

    // fun call using '%' 
    oddEven (num);


    // fun call using '&' 
    oddEven2 (num);

}