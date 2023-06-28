// Basics of Sting with user defined fuctions

#include<iostream>
#include<string>
using namespace std;

int main() {

    // string a = "Vishnu";
    // cout << "Your String is : " << a;

    // string str;
    // cout << "Enter the string : ";
    // cin >> str;                                    // the input after space won't be printed
    // cout << "Your String is : " << str;


    // string str;
    // cout << "Enter the string : ";
    // getline(cin, str);
    // cout << "Full string is : " << str;

    string str;
    cout << "Enter your string : ";
    cin >> str;


    cout << "Lenght of the string is : " << str.length() << endl;      // length of string
    cout << "String is empty or not " << str.empty() << endl;          // empty string 

    str.push_back('A');                                 // push_back()
    cout << "push_back() : " << str << endl;
    
    str.pop_back();                                     // pop_back()
    cout << "pop_back() : " << str << endl;

    string str1 = str.substr(0, 6);                      // parameters are start of string and end of string index
    cout << "Substring : " << str1 << endl;

    string str2;
    cout << "Enter the second string: ";
    cin >> str2;                                         // note that it counts no of char in both strings
    cout << str.compare(str2) << endl;                           // compare string 


    // find()
    string sub = "is";
    int pos = str.find(sub);                   // find()   position of substring
    if (pos == string::npos) {
        cout << "Position not found" <<endl;
    }
    else {
        cout << "Position of substring is : " << pos << endl;
    }
    
    str.replace(4, 3, "BatMan");
    cout << "Replaced string : " << str << endl;

    str.erase(0, 4);
    cout << "Erased string : "<< str << endl;

}