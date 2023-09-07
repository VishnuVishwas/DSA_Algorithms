// Operator Overloading 

#include<iostream>
using namespace std;

class Parameter {
    public:
        int val;

        void operator + (Parameter& obj2) {
            int val1 = this->val;
            int val2 = obj2.val;

            cout << (val1-val2) << endl; 
        }
};

int main() {

    Parameter obj1, obj2;

    obj1.val = 8;
    obj2.val = 5;

    obj1 + obj2;

}