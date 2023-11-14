#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int main() {

    // int row, col;
    // cin >> row >> col;
    // vector<vector<int>> vrr (row, vector<int> (col, -8));

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};


    int mini = INT_MAX;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(arr[i][j] < mini) {
                mini = arr[i][j];
            }
        }  
    }

    cout << "Maximum number is : " << mini << endl;


    // cout << "Elements of 2d array are : " << endl;
    // for(int i=0; i<5; i++) {
    //     for(int j=0; j<5; j++) {
    //         cout << vrr[i][j] << " ";
    //     }
    //     cout << endl;   
    // }
}