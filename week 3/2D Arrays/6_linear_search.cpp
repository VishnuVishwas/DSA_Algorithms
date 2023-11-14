#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    bool flag=false;
    int key = 12;

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(arr[i][j] == key) {
                flag = true;
                break;
            }
        }  
    }

    if (flag==true) 
        cout << "true";
    else 
        cout << "false";}