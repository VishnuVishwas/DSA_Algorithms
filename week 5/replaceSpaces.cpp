// Replace spaces in a sting with a given char


#include <iostream>
#include <string.h>
using namespace std;

void replaceSpace (char names[]) {
    int n = strlen(names);

    for (int i = 0; i < n; i++) {
        if (names[i] == ' ') {
            names[i] = '@';
        }
    }
}

int main() {
    char names [100];

    cout << "Enter the string : ";
    cin.getline(names, 100);

    cout << "String before replacing space : " << names <<endl;
    replaceSpace (names);

    cout << "String after replacing space : "  << names << endl;

}