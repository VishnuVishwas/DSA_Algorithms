// not complete

#include<iostream>
#include<vector>
using namespace std;

bool isSafe(vector<vector<char>>& arr, int n, int row, int col) {
    int i = row;
    int j = col;

    // to check in same row
    while(j >= 0) {
        if(arr[i][j] == 'Q') {
            return false;
        }
        j--;
    }

    i=row;
    j=col;
    // to check for upper diagonal elements
    while(i>=0 &&j>=0 ) {
        if(arr[i][j] == 'Q') {
            return false;
        }  
        i--, j--;
    }

    i=row;
    j=col;
     // check for lower diagonal elements
     while(i<n && j>=0) {
        if(arr[i][j] == 'Q') {
            return false;
        }
        i++;
        j--;
     }

     return true;
}

void printSolution(vector<vector<char>>& arr, int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
        cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
}

void nQueen(vector<vector<char>>& arr, int n, int col) {
    if(col >= n) {
        printSolution(arr, n);
        return;
    }

    for(int row=0; row<n; row++) {           // each row mein queen ko rakna h
        if(isSafe(arr, n, row, col)) {
            arr[row][col] = 'Q';
        }
        // recursive call
        nQueen(arr, n, col+1);
        // backtracking
        arr[row][col] = '.';
    }
}

int main() {
    int n=4;
    vector<vector<char>> board(n, vector<char>(n, '.'));

    int col=0;

    nQueen(board, n, col);
}