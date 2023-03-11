#include <iostream>
#include <vector>

using namespace std;

int insertionSort(vector<int> names) {
    int n = names.size();

    for (int i = 1; i < n; i++) {
        int value = names[i];
        int j = i-1;

        for ( ; j >= 0; j--) {
            if (names[j] > value) {
                names[j+1] = names[j];
            }
            else {
                break;
            }
        }
    names[j+1] = value;
    }

    // after sorting 
    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }
}

int main() {
    vector<int> names {10, 1, 7, 6, 14, 9};

    insertionSort(names);
}