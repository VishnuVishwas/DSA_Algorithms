#insertion sort 
                    # It contains 4steps 
                                    # 1. Store the value 
                                    # 2. Compare with previous elements
                                    # 3. Shift the values
                                    # 4. copy the stored value


#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> vrr) {
    for (int i=1; i<vrr.size(); i++) {

# 1. Store the value 
        int value = vrr[i];
        int j=i-1;
        for (; j>=0; j--) {
            
# 2. Compare with previous elements
            if(vrr[j] > value) {
# 3. Shift the values
                vrr[j+1] = vrr[j];
            }
            else {
                break;
            }
        }
 # 4. copy the stored value
        vrr[j+1] = value;
    }

    cout << endl;
    cout << "Array before sort : ";
    for(int i=0; i<vrr.size(); i++) {
        cout << vrr[i] << " ";
    }
}

int main() {
    vector<int> vrr {8, 1, 6, 5 ,3  };

    cout << "Array before sort : ";
    for (int i=0; i<vrr.size(); i++) {
        cout << vrr[i] << " ";
    }
    insertionSort(vrr);
}
