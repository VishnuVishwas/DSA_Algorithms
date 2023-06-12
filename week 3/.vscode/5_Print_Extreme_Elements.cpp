// PRintitng the extreme elements of array

#include<iostream>
#include <limits.h>
using namespace std;

void printExtreme(int arr[], int size) {
    int i=0, j=size-1;

    while(i<=j) {
        if(i==j) {
            cout << arr[i] << " ";
            break;
        } 
        else {
            cout << arr[i] << " ";
            cout << arr[j] << " ";
            j--;
            i++;
        }
    }
}

int main() {
    int arr[6] = {1, 2, 9, 4, 5, 6};

    cout << "Array elements are : ";
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;


    printExtreme(arr, 6);
}
