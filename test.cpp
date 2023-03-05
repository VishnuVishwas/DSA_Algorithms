#include <iostream>
using namespace std;


// global var
int g = 29;

int main() {
    
// g value 
    cout << "Global var : " << g << endl << endl;

// updatation of global var
    g = 10;
    cout << "updatation of global var "<< g << endl << endl;

// again updating global var
    g =199;
    cout << "again updating global var " << g << endl << endl;

// delecration local var 
    int a = 20;
    cout << "Local var : " << a << endl<< endl;

// trying to update a local var leads to error
    // int a = 40;
    // cout << "Updating local var : " << a << endl << endl;

    if (true) {
        int a = 999;
        cout << "'a' var inside loop : " << a << endl << endl;
    }

    // unassigned value will print garbage value
    int b;
    cout << "value of b : " << b << endl << endl;

// bool + bool --> int
    cout << "bool + bool --> int : " <<true + false << endl << endl;

// Defalut size of floating var
    cout <<"Default size of floting integer : " <<sizeof(8.0) << endl << endl; // doubles
}

// we cannot have more than 1 main function
    // int main() {
    //     cout << "hello";
    // }