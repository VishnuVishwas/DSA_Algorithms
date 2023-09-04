#include<iostream>
using namespace std;

class animal {

private:
    int weight;

public:
    int getWeight() {
        return weight;
    }

    int setWeight( int w ) {
        weight = w;
    }
};

int main() {
    
    animal obj;

    obj.setWeight(101);
    cout << "The weight is : " << obj.getWeight();
}