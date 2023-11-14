#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

void transpose(int arr[][3], int row, int col, int transposesArr[][3]) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            transposesArr[j][i] = arr[i][j]; 
        }  
    }
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transposeArr[3][3];

    transpose(arr, 3, 3, transposeArr);

    // Before transpose 
    cout << "Before Transpose" << endl;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << arr[i][j] << " "; 
        }  
        cout << endl;
    }

    // Afrer Transpose
    cout << "After Transpose" << endl;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << transposeArr[i][j] << " "; 
        }  
        cout << endl;
    }
}