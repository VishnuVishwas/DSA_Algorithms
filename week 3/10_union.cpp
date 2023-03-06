#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<int> v1 {1, 2, 3, 3, 4};
    vector<int> v2 {4, 5};

    vector<int> v3;

    for (int i = 0; i < v1.size(); i++) {
        v3.push_back(v1[i]);
    }

    for (int i = 0; i < v2.size(); i++) {
        bool flag = false;
        
        for (int j = 0; j < v2.size(); j++) {
            if (v2[j] == v1[i]) {
                flag = true;
                break;
            }
        }
        if (flag == false) {
            v3.push_back(v2[i]);
        }
    } 

    for (int i = 0; i < v3.size(); i++) {
        cout << v3[i];
    }
}
