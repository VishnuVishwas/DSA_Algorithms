// double pointers

#include<iostream>
using namespace std;

int main() {
    int a = 5;
    int* b = &a;           // references to address of a
    int** c = &b;          // references to address of b

    cout << "Value of a : " << a << endl;
    cout << "Adress of a : " << &a << endl;

    cout << "Value present in b : " << b << endl;             // references to address of a
    cout << "Address of b : " << &b << endl;
    cout << "b referening to : " << *b << endl;

    cout << "Value present in c : " << c << endl;             // references to address of b
    cout << "Address of c : " << &c << endl;
    cout << "c referenting to : " << *c << endl;
    cout << "Double reference operator : " << **c << endl;    // double references
}