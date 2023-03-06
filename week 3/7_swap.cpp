#include <iostream>
using namespace std;

int main() {

    // swaping using third variable
    cout << "\nUsing 3rd variable";
    int temp, a = 1, b = 2;
    cout << "Before swappping a = " << a << " and b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After swappping a = " << a << " and b = " << b << endl;

    cout << endl;

    // using xor opertor
    cout << "using xor operator";
    int c = 3, d = 4;
    cout << "Before swappping c = " << c << " and d = " << d << endl;
    c = c ^ d;
    d = c ^ d;
    c = c ^ d;
    cout << "After swappping c = " << c << " and d = " << d << endl;

    cout << endl;

    // using arithmetic operator
    cout << "Swaping using arithmetic operator";
    int num1 = 5, num2 = 6;

    cout << "Before swappping num1 = " << num1 << " and num2 = " << num2 << endl;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << "After swappping num1 = " << num1 << " and num2 = " << num2 << endl;
}