#include<iostream>
using namespace std;


// creating class
class animal {

public:

// properties
    int age;
    string name;

// methods
    void eat() {
        cout << name << " it eats ";
    }

    void sleep() {
        cout << name << " it sleeps " ;
    }
};

int main() {
    
// creating object
    animal obj;

// initializing variable values using obj
    obj.age=15;
    obj.name = "Lion";

// accesing the variables of class "animal"
    cout << "Age of animal is : " << obj.age << endl;
    cout << "Name of animal is : " << obj.name << endl;

// accessing methods
    obj.eat();
    cout << endl;
    obj.sleep();

}