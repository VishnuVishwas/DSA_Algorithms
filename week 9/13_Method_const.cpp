// private class memebers can be changed, in a "constant" function using "mutable"

#include<iostream>
using namespace std;

class Train {
    private: 
        mutable int x;
    public:
        int getx() const{
            x = 10;
            return x;
        }
};

int main( ) {
    
    Train* obj = new Train;
    cout << " using mautable keyword, we changed the private memeber in constant method : "<< obj->getx();
}