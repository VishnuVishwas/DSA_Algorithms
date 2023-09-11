/*
    Constant With Pointers
        1. constant value, non-constant pointer
        2. Non-constant data, Constant Pointer
        3. constant data, Constant Pointer   
*/

#include<iostream>
using namespace std;

class Animal {
public: 
    int weight = 5;

    void speak() {
        cout << "Animal can make sounds" << endl;
    }
};

int main() {

    int b=5;

// constant value, non-constant pointer
    cout << "constant value, non-constant pointer" << endl;
    const int* obj = new int(2);
    cout << "Object holding value : " << *obj;
    cout << endl;
    cout << "Intial adress : " << obj;
    cout << endl; 

    //*obj = 222;                          //this cannot be done bcoz value is constant

    obj = &b;                              // pointer adress can be changed
    cout << "Updated adress: " << obj;
    cout << endl;
    cout << *obj << endl << endl << endl;

// Non-constant data, Constant Pointer
    cout << "Non-constant data, Constant Pointer" << endl;   
    int* const obj2 = new int(2);
    cout << "Intital value obj holds : " << *obj << endl;
    cout << "Intital adress of the pointer : " << obj << endl;
    
    *obj2 = 70;
    cout << "The obj value can be updated " << *obj2 << endl << endl << endl;
    // obj2 = &b;                                               // obj holding adress cannot be updated
    
// constant data, Constant Pointer    
    cout << "constant data, Constant Pointer" << endl;   
    const int* const obj3 = new int(2);
    cout << "Intital value obj holds : " << *obj << endl;
    cout << "Intital adress of the pointer : " << obj << endl;
    cout << "both cannot be done, since both are constant" << endl;
    
    // *obj3 = 70;          // both cannot be done, since both are constant
    // obj3 = &b;   
}