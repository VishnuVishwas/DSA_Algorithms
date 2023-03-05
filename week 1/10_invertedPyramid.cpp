#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of n : ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        // printing spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        //printing stars
        for (int j = 0; j < n-i; j++) {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}