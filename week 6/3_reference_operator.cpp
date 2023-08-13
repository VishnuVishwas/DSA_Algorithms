// reference operator -> one address two names     
// using & before datatype

#include<iostream>
using namespace std;

int main() {
    int a = 5;
    int& b = a;

    cout << "Value at a : " << a << endl;
    cout << "Value at b : " << b << endl;                    

    a++;                     // changes done on a will be reflected on b, since both refer to same memory location

    cout << "Value at a : " << a << endl;     
    cout << "Value at b : " << b << endl;
}