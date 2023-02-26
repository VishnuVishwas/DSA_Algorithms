#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> names, int key) {
    int start = 0;
    int end = names.size() - 1;

    int mid = start + (end - start)/2;
    int ans = -1;

    while (start <= end) {
        if (key == names[mid]) {
            ans = mid;
            end = mid - 1;
        }

        else if (key > names[mid] ){
            start = mid + 1;
        }
        
        else if (key < names[mid]) {            
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOcc(vector<int> names, int key) {
    int start = 0;
    int end = names.size() - 1;

    int mid = start + (end - start)/2;
    int ans = -1;

    while (start <= end) {
        if (key == names[mid]) {
            ans = mid;
            start = mid + 1;
        }

        else if (key > names[mid] ){
            start = mid + 1;
        }
        
        else if (key < names[mid]) {            
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }
    return ans;
}

int main() {
    vector<int> names{1, 4, 6, 7, 7, 7, 7, 8, 9};
    int key;

    cout << "Enter the key : ";
    cin >> key;

    int firstIndex = firstOcc (names, key);
    cout << "\nThe first occurence of element is " << firstIndex;

    int lastIndex = lastOcc (names, key);
    cout << "\nThe last occurence of element is " << lastIndex;
}