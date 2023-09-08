// Function Over riding

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
        void speak() {
            cout << "Barking" << endl;
        }
};

int main(){
    Animal a;
    a.speak();

    Dog d;
    d.speak();

}