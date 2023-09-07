// Multiple Inheritance

#include<iostream>
using namespace std;

class Tiger {
    public:
        void tigerMethod() {
            cout << "Class Tiger" << endl;
        }
};

class Lion {
    public:
        void LionMethod() {
            cout << "Class Lion " << endl;
        }
};

class Liger : public Tiger, public Lion {
public:
    void liger() {
        cout << "Liger : Derived from Tiger and Lion" << endl;
    }
};

int main() {
    Liger L;
    L.liger();
}