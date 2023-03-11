#include <iostream>
#include <string.h>
using namespace std;

void reverseString (char name[]) {
    int n = strlen(name);

    int i = 0; 
    int j = n-1;

    while (i <= j) {
        swap (name[i], name[j]);
        i++;
        j--;
    }
    cout << "String after reversing : "<< name << endl;
}


int main() {
    char name[100] = "vishn";
    cout << "String before reversing : "<<name << endl;    


    reverseString(name);


}