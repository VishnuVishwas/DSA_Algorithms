#include<iostream>
using namespace std;

int main() {

    // normal storing variables
    int a = 5;
    int b = 5;

    // to store the address of a and b
    int* ptra = &a;
    int* ptrb = &b;

    cout << "Adress of a is : " << ptra << endl;
    cout << "Adress of b is : " << ptrb << endl;

    int c = 5;
    int* ptrc = &c;

    cout << "Value at c : " << c << endl;
    cout << "Adress of c : "  << &c << endl;
    // cout << *c;                                         // error
    cout << "Pointer ke andar : " << ptrc << endl;
    cout << "Pointer value : " << *ptrc << endl;
    cout << "Adress of pointer : " << &ptrc << endl;
        
    // pointer copy
    int d = 5;
    int* ptrd = &d;
    int* copied_pointer = ptrd;

    cout << "value in d : " <<  ptrd << endl;                         // adress of a
    cout << "Value in copied_pointer " << copied_pointer << endl;     // adress of a

    
}