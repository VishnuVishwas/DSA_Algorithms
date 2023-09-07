// constructor

/*
    two types of constructor
        1. Default constructor
        2. parameterised constructor
*/


#include<iostream>
using namespace std;

// default constructor
class animal {
    public:
        animal() {
            cout << "constructor called" << endl;
        }
};

// parameterised constructor
class Animal {
    public:

        int age;

        Animal(int age) {
            this->age = age;
            cout << "Age is : " << age << endl;
        }
};

int main() {
    animal a;       // for default constructor
    Animal* obj = new Animal(100);      // parameterised constructor
}