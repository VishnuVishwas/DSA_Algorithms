// Function Overloading 

#include<iostream>
using namespace std;

class Animal {

    public:
        int sum(int a, int b) {
            cout << a << " " << b << endl;
            return a+b;
        }

        int sum(int a, float b) {
            cout << a << " " << b << endl;
        }
};

int main() {
    
    Animal obj;

    obj.sum(4, 5);
    obj.sum(555, 56.7f);

}