//changing every element of an array into 1

#include <iostream>
using namespace std;

int main () {
    int arr[] = {1, 3, 5, 2, 7};

    for (int i = 0; i < 5; i++) {
        arr[i] = 1; 
    }

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }
}
