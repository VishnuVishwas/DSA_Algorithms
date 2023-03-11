#include <iostream>
using namespace std;

int main () {
    
// creating char[array]
    char arr1[100] = "Vishnu vishwas";
    cout << arr1 << endl;

// The next word after the space is excluded
    char arr2[100];
    cout << "string 2 : " ;
    cin >> arr2;
    cout << arr2 << endl;

// The fun used include the word after the space 
    char arr3[100];
    cout << "string 3 : " ;
    cin >> arr3;
    cin.getline(arr3, 50);
    cout << arr3 << endl;

}