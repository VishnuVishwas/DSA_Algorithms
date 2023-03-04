// sort colors 
// sort 0, 1, 2


#include<iostream>
#include <vector>
using namespace std;

int sortColors(vector<int> names) {
// using 3 pointer approach
    // low 
    int l = 0;
    // med
    int m = 0;
    // high
    int h = names.size() - 1;

    while (m <= h) {
        // 
        if (names[m] == 0) {
            swap(names[m], names[l]);
            l++;
            m++;
        }

        else if (names[m] == 1) {
            m++;
        }

        else if(names[m] == 2 ) {
            swap(names[h], names[m]);
            h--;
        }
    }
    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << " ";
    }
}

int main() {
    vector<int> names{1, 1, 0, 2, 2, 0};

    sortColors(names);
}