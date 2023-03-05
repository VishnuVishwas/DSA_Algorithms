#include <iostream>
using namespace std;

int main() {

    // Implicit type casting
    char ch = 97;
    cout <<" Implicit type cast : " << ch << endl;

    // Explicit type cast
    char ch1 = char(98);
    cout <<"Explicit type cast : " << ch1 << endl;

    // overflow
    char ch2 = 999;    
    cout << ch2 << endl;  // a unexpected value is printed

    cout << true + false;

    cout << 2.7 + 100;
}