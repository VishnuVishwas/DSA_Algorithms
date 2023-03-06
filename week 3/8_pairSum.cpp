#include <iostream>
#include <vector>
using namespace std;

int main() {

    int arr[5] = {4, 5, 6, 3, 2};
    for (int i = 0; i < 5; i++ ) {
        for (int j = i+1; j < 5; j++) {
            if (arr[i] + arr[j] == 9) {
                cout << "(" << arr[i] << " , " << arr[j] << ")" << endl;
            }
        }
    } 
    // vector<int> vrr;

    // cout << "Enter the values into vector : ";
    // for (int i = 0; i < 5; i++) {
    //     cin >> vrr[i];
    // }

    // for (int i = 0; i < vrr.size(); i++) {
    //     for (int j = i+1; j < vrr.size(); j++) {
    //             cout << vrr[i] << endl;
    //     }
    // }

    // int sum = 9;
    // for (int i = 0; i < vrr.size(); i++) {
    //     for (int j = i+1; j < vrr.size(); j++) {
    //         if ((vrr[i] + vrr[j]) == sum) {
    //             cout << "(" << vrr[i] << " , " << vrr[j] << ")" << endl;
    //         }
    //     }
    // }
}