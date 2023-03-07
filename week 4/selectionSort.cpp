// selection sort

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> names) {
    
    for (int i = 0; i< names.size()-1; i++) {
        int min = i;
        for (int j = i+1; j < names.size(); j++) {
            if (names[j] < names[min]) {
                min = j;
            }
        }
        swap(names[i], names[min]);
    }
    
    //after sort
    cout << "\nAfter sort : ";
    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << " ";
    }
}

int main() {
    vector<int> names{5, 2, 19, 88, 55};

    // before sort
    cout << "Before sort : ";
    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << " ";
    }

    // function call
    selectionSort(names);


}