#include <iostream>
using namespace std;

int fiboSeries (int n) {
    if (n==0) {
        return 0;
    }

    if (n==1) {
        return 1;
    }

    return fiboSeries(n-1) + fiboSeries(n-2);
}

int main() {
    int n;

    cout << "Enter the number of terms : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << " " << fiboSeries(i);
    } 
    
}