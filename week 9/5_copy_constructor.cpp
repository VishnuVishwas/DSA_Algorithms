#include<iostream>
using namespace std;

class Animal {
    public:
        int age;

        Animal (Animal& obj) {
            this->age = obj.age;
            cout << "Copy constructor" << endl;
        }
};

int main() {
    Animal obj();
    cout << obj.age;
    Animal b(obj);
}