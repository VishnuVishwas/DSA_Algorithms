#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int* ptr = &a;

    cout << a << endl;
    cout << &a << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    // size of different data type pointers
    int b = 10;
    int* p = &b;
    cout << "sizeof(p) : " << sizeof(p) << endl;

    float c = 10;
    float* q = &c;
    cout << "sizeof(q) : " << sizeof(q) << endl;

    char d = '10';
    char* r = &d;
    cout << "sizeof(r) : " << sizeof(r) << endl;

    double e = 1.03;
    double* s = &e;
    cout << "sizeof(s) : " << sizeof(s) << endl;

    // pointer declaration 
    int *t;
    cout << t << endl;  // prints garbage value 
    cout << *t << endl; // segmentation error or does not print anything

    // Null pointer declaration
    int *u = 0;
    cout << u << endl;
    cout << *u << endl;

    // Null pointer declaration - 2
    int *v = nullptr;
    cout << v << endl;
    cout << *v << endl;

    // copy pointer
    int f = 43;
    int* w = &f;
    int* x = w;

    cout << w <<endl;     // Both 'w'and 'x' will be poiting to address of 'f'
    cout << x << endl;
}