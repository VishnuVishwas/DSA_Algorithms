#include<iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    // get the pivot index and element
    int pivotIndex = s;
    int pivotEle = arr[s];

    // find the right index of piviot element
    int count = 0;
    for(int i=s+1; i<=e; i++) {
        if(arr[i] <= pivotEle) {
            count++;
        }
    }

    // swap the piviot element to its right index
    int rightIndex = s+count;
    swap(arr[s], arr[rightIndex]);
    
    pivotIndex = rightIndex;   // pivot index after swapping

    // move all small elements to left of piviot element
    // move all big elements to right side of piviot element
    int i = s;
    int j = e;
    while ( i<pivotIndex && j>pivotIndex) {
        while(arr[i] < pivotEle){   // increment index until we reach ele greater than pivot ele
            i++;
        }
        while(arr[j] > pivotEle) { // decrement index until we reach ele greater than pivot ele
            j--;
        }
        if(i<pivotIndex && j>pivotIndex) {  // if leftele>pivotEle && rightele<pivotEle 
            swap(arr[i], arr[j]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e) {

    if(s >= e)  // if there is single element then it is sorted and if s>e invalid case for array
        return;

    // partitioning 
    int p = partition(arr, s, e);

    // sort
    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);

}

int main() {
    int arr[] = {8, 1, 3, 4, 20, 50, 3, 30};

    int n = 8;
    int s = 0; 
    int e = n-1;

    quickSort(arr, s, e);

    cout << "Array after sorting " << endl;
    for(int i=0; i<8; i++){
        cout << arr[i] << " ";
    }

    return 0;
}