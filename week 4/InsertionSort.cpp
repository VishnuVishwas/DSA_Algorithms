// insetion sort
// incomplete

#include <iostream>
#include <vector>
using namespace std;

int insertionSort (int names[], int size) {
    for (int i = 1; i < size; i++) {
        int value = names[i];
        int j = i-1;

        while (j>=0 && names[j]> value ) {
            names[j+1] = names[j];
            j--;
        }
        names[j+1] = value;
    }

    // after sorting
    cout << "After sorting : ";
    for (int i = 0; i < size; i++) {
        cout << names[i] <<" ";
    }
}
 
int main() {
    int names[100] = {8, 1, 6, 5 ,3};

    // cout << "Enter the elements : ";
    // for(int i = 0; i < sizeof(names);  i++) {
    //     cin >> names[i];
    // }

    cout << "Before sorting : ";
    for (int i = 0; i < sizeof(names); i++) {
        cout << names[i] << " ";
    }

    insertionSort (names, sizeof(names) );
}