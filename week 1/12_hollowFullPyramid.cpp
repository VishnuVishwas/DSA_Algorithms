#include<iostream>
using namespace std;

int main() {
    int row=4, col=4;

    for(int i=0; i<row; i++) {
    // printing spaces
    int j=0;
        while(j<row-i-1) {
            cout << " ";
            j++;
        }
    // printing 1st half
    j=0;
        while(j<i+1) {
            if(j==0 || i==row-1) {
                 cout << "*";
            }
            else   
                cout << " "; 
            j++;
        }
    j=0;
        while(j<i) {
            if(j==i-1 || i==row-1) {
                 cout << "*";
            }
            else   
                cout << " "; 
            j++;
        }

        cout << endl;
    }
}
