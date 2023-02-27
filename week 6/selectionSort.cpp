#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> names) {

int n = names.size() - 1;

    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++)  {
            if (names[minIndex] > names[j]) {
                minIndex = j;
            }
        }
        swap (names[minIndex], names[i]);
    }

    //after sort
    for (int i = 0; i < n; i++) {
        cout << names[i];
    }
}

int main() {
    vector<int> names{5, 4, 2, 1, 7, 6};

    selectionSort (names);
}