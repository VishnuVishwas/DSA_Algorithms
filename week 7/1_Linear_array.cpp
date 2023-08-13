// printing n elements in descending order using recursion

#include<iostream>
using namespace std;

void printCount(int n) {
    
    //Base case
    if(n == 0) {
        return;
    }

    // processing 
    cout << n << " ";

    // recursive call
    return printCount(n-1);
}

int main() {
    int n;

    cout << "Enter the value of n : ";
    cin >> n;

    printCount(n);
} 