/*

     *
    * *
   * * *
  * * * *
 * * * * *
* * * * * *

*/



#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of n : ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        // printing spaces
        for (int j = 0; j < n-i-1; j ++) {
            cout << " ";
        }

        //printing stars
        for (int j = 0; j < i+1; j++) {
            cout << "*";
        }

        // incase if we don't have to print spaces after star and contiue
        // //printing second set of stars
        // for (int j = 1; j<=i; j++) {
        //     cout << "*";
        // }

        cout << endl;
    }
    return 0;
}

/*
    second code
    
    *
   ***
  *****
 *******
*********

*/