#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> names) {

    int n = names.size();
    bool swapped = false;

    for (int i = 0; i < n-1; i++) { // i = rounds
        for (int j = 0; j < n-i-1; j++) {
            if (names[j] > names[j+1]) {
                swap(names[j], names[j+1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }
}

int main() {
    vector<int> names{10, 1, 7, 6, 14, 9};

    bubbleSort(names);
}