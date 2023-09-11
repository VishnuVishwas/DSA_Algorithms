// first part of the object print hoga

#include<iostream>
using namespace std;

class Animal {
    public:
        virtual void speak() {                        // upcasting 
            cout << "Speak" << endl;
        }
};

class Dog : public Animal{
    public:
        void speak() {
            cout << "Barking" << endl;
        }
};

int main() {
    Animal* obj = new Dog();
    obj->speak();                      // since we upcasted, output will be "Barking"
}
