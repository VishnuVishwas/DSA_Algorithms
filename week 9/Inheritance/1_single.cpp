// Inheritance 
#include<iostream>
using namespace std;

class Animal {
    public:
        int age;

        void sleep() {
            cout << "Animal Sleeps" << endl;
        }

};

class Dog : public Animal {
    public:
        void eat() {
            cout << "Dog eats" << endl;
        }
};

int main() {        
    Dog obj;

    obj.age = 45;

    cout << obj.age << endl;
    obj.sleep();
    obj.eat(); 
}