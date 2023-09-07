// Destructor 

#include<iostream>
using namespace std;

class Animal {
public:
    int age;

    Animal() {
        cout << age << endl;
        cout << "Inside constructor" << endl;
    }

    ~Animal() {
        cout << "Inside Destructor " << endl;
    }
};

int main() {

    Animal* a = new Animal();
    delete a;
}