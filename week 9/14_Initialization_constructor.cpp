// New way of writing constructor

#include<iostream>
using namespace std;

class abc{
    int x;
    int y;
    const int z = 22;
public:
    abc(int _x, int _y) : x(_x), y(_y) {
        cout << x << endl;
        cout << y << endl;
    } 
};

int main() {
    abc* obj = new abc(12, 33);
}