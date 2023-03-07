// Bubble sort

#include <iostream>
#include <vector>
using namespace std;

int bubbleSort (vector<int> arr) {
    
    for (int i = 0; i < arr.size()-1; i++) {
        bool swapped = false;

        for (int j = 0; j < arr.size()-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swapped = true;
                swap(arr[j], arr[j+1]);
            }
        }

        if (swapped == false) {
            break;
        }
    }

    //after sort
    cout << "\nAfter sort : ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
} 

int main() {
    vector<int> arr{9, 5, 3, 0, 1};

    cout << "Before sorting : ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    // calling bubble sort function
    bubbleSort(arr);
}