#include <iostream>
#include <string.h>
using namespace std;

int stringLen (char arr[]) {
    
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char arr[100] = "vishnu vishwas";

// user defined string length fun
    int length = stringLen(arr);
    cout << "Length of the string is : " << length << endl;

// inbuilt string length fun
    cout << "The lenght using inbuilt fun : " << strlen(arr);
}