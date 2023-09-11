//    Animal* obj = new Dog();
//    Animal* obj1 = new Animal();
//    Dog* obj3 = new Dog();
//    Dog* obj4 = (Dog*) new Animal();

#include<iostream>
using namespace std;

class Animal {
public:
    int weight;

    void speak() {
        cout << "Animal can Speak";
    }
};

class Dog : public Animal {
public: 
    void speak() {
        cout << "Dog can bark";
    }
};

int main() {
    Animal* obj = new Dog();
    obj->speak();

    cout << endl;

    Animal* obj1 = new Animal();
    obj1->speak();

    cout << endl;

    Dog* obj3 = new Dog();
    obj3->speak();

    cout << endl;

    Dog* obj4 = (Dog*) new Animal();
    obj4->speak();
}