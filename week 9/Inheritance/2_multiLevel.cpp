// Multi - Level Inheritance

#include<iostream>
using namespace std;

class Animal {
public:   
    void animal() {
        cout << "This Animal, Parent class " << endl;
    }
};

class Dog : public Animal {
public: 
    void dog () {
        cout << "1st child class : Derived from Animal class " << endl;
    }
};

class germanShepard : public Dog {
public: 
    void german() {
        cout << "2nd child class : Derived from Dog class " << endl;
    }
};

int main() {
    germanShepard obj;

    obj.animal();
    obj.dog();
    obj.german();
    
}   