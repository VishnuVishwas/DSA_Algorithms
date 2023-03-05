#include <iostream>
using namespace std;

int main () {
    int a = 8;
    float b;

// left shift
    b = a << 1;                                  // multiplied by 2
    cout << b << endl;

// right shift                                   // divided by 2
    b = a >> 1;
    cout << b << endl;

// operators 
    int c = 5;
    cout << (++c) * (++c) << endl;


    int d = 10;
    d << 1;
    cout << "Left shift was not performed : "<<d << endl;

    d = d << 1;
    cout << "Left shift was performed " << d << endl; 

}
