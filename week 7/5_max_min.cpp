// finding maximum and minimun element in an array using recursion

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void max(vector<int> vrr, int n, int i, int& maxi) {
    if (i >= n)             // traversed all the elements
        return;

    if(vrr[i] > maxi) {           // check for max element
        maxi = vrr[i];
    }

    max(vrr, n, i+1, maxi);         // moving to next element in array
}

void min(vector<int> vrr, int n, int i, int& mini) {
    if (i >= n) 
        return;

    if (vrr[i] < mini) 
        mini = vrr[i];

    min (vrr, n, i+1, mini);
}

int main() {
    vector<int> vrr {5, 9, 3, 7, 15};
    int n =  vrr.size();

    int i = 0;

    int maxi = INT_MIN;
    max(vrr, n, i, maxi);
    cout << "Maximum number is : " << maxi << endl;

    int mini = INT_MAX;
    min(vrr, n, i, mini);
    cout << "Minium number is : " << mini << endl;
}