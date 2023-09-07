#include<iostream>
using namespace std;

class Car {
    public:
    void car() {
        cout << "Car" << endl;
    }
};

class Lambo : public Car {
    public:
    void lambo() {
        cout << "Lamborgini derived from car " << endl;
    }
};

class Ferrari : public Car {
    public:
    void ferrari() {
        cout << "Ferrari derived from car " << endl;
    }
};

int main() {
    Ferrari obj;
    obj.ferrari();
}