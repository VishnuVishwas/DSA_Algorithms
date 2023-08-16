// print the digits of given number

#include<iostream>
using namespace std;

void printDigits(int n) {

    if(n == 0) 
        return;
    
    printDigits(n/10);

    int digit = n%10;
    cout << digit << " "; 
}

int main() {
    int n = 647;

    printDigits(n);
}