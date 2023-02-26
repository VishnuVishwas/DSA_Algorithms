// what will happen if we place "cin" and "cout" inside a loop condition

// "cin" --> The output will be true for any case and the loop will be processed for "1" time

/*
    "cout" --> first the cout inside loop will be printed and then the loop will be exicuted
    if we use while then it will be inside a infinte loop
*/ 

#include <iostream>
using namespace std;

int main() {
    int n;

    // placing "cout" inside loop
    cout << "Cout inside loop conditon " << endl;
    cin >> n;
    if (cout << n) {                           // 
        cout << " Vishwas " << endl;
    }


    // placing cout inside loop
    cout << "Cin inside loop" << endl;
    while (cin >> n) {
        cout << "vishnu";
    }
    return 0;
}
