// dynamically obj creation

#include<iostream>
using namespace std;

class Animal {
    public:
        int age;
        int weight;
};

int main() {
    
// creates object and obj stores the address 
    Animal* obj = new Animal;

// since obj stores address, modification of obj value cannot be done on addess
    // obj.age=15;

// to assign the values to variables of is_object
    // type 1:
        (*obj).age = 15;
        (*obj).weight = 50;

        cout << "Age of animal is : " << (*obj).age << endl;
        cout << "Weight of animal is : " << (*obj).weight << endl;

    // type 2 : 
        obj->age = 30;
        obj-> weight = 44;

        cout << "using type 2, age : " << obj->age << endl;
        cout << "Using type 2, weight : " << obj->weight << endl; 
}