#include<iostream>
using namespace std;

class Animal {
    public:
        void speak() {
            cout << "Speak" << endl;
        }
};

class Dog : public Animal{
    public:
        virtual void speak() {
            cout << "Barking" << endl;
        }
};

int main() {
    Animal* obj = new Dog();


}
