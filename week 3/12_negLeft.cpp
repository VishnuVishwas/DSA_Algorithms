#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// using sor function
void sort (vector<int> vrr) {
    sort(vrr.begin(), vrr.end());

    for (int i = 0; i < vrr.size(); i++) {
        cout << vrr[i] << " ";
    }
    cout << endl;
}

// using two pointer approch
void twoPointer (vector<int> vrr) {
    int low = 0;
    int high = vrr.size() - 1;

    while (low < high) {
        if (vrr[low] < 0)  {
            low--;
        }

        else if (vrr[high] > 0) {
            high--;
        }
        else if (vrr[low] > 0 && vrr[high] < 0) {
            swap (vrr[low], vrr[high]);
            high--;
            low++;
        }
    }

// after sorting 
    for (int i = 0; i < vrr.size(); i++) {
        cout << vrr[i] << " ";
    }    
} 

int main () {
    vector<int> vrr {1, 2, -3, 4, -5, 6};

    // method 1
    sort (vrr);

    // method 2 (dutch flag)
    twoPointer (vrr);


}