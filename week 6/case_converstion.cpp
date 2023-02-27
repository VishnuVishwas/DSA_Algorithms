// converting lower - upper case letters
// converting upper - lower case letters

#include <iostream>
#include <string.h>
using namespace std;

void lowerUpper(char names[] ) {

    int n = strlen(names);
    for (int i = 0; i < n; i++) {
        names[i] = names[i] - 'a' + 'A';
    }
}

void UpperLower(char names1[] ) {

    int n = strlen(names1);
    for (int i = 0; i < n; i++) {
        names1[i] = names1[i] - 'A' + 'a';
    }
}

void mixed(char names[] ) {

    int n = strlen(names);
    for (int i = 0; i < n; i++) {

        // ignoring spaces
        if (names[i] == ' ') {
            continue;
        }
        // checking for upper case letters
        if (names[i] >= 'A' && names[i] <= 'Z') {
        names[i] = names[i] - 'A' + 'a';
        }

        //checking for lower case letters
        else {
        names[i] = names[i] - 'a' + 'A';           
    }
    }
}

int main() {

// converting from lower to upper
    cout << "Conversion from lower to upper" << endl;
    char names[100] = "vishnu";
    cout << "String before converting : " << names <<endl;

    lowerUpper (names);
    cout << "String after converting : " << names <<endl;


// converting from upper to lower
    cout << endl;
    cout << "Conversion from upper to lower";
    char names1[100] = "VISHWAS";
    cout << "String before converting : " << names <<endl;

    UpperLower (names1);
    cout << "String after converting : " << names1 <<endl;

// mixed 
    cout << endl;
    cout << "mixed letters : ";
    char names2[100];
    cin.getline(names2, 100);
    cout << "String before converting : " << names2 <<endl;

    mixed (names2);
    cout << "String after converting : " << names2 <<endl;

}