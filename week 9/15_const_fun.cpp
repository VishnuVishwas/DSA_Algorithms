// only constant functions can be accessed through print()

#include<iostream>
using namespace std;

class Train{
    mutable int weight;

    public:

        Train(int _x) {
            this->weight = _x;
        }

         int getx() const {
            return weight;
        }

        void setx(int weight) const {
            this->weight = weight;
        }
};

void print(const Train &obj) {
    cout << obj.getx();
}

int main() {
    Train a(34);
    print(a);
}