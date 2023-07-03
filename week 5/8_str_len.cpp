// C++ program to find length
// of a string
#include <iostream>
#include <string.h>
using namespace std;

// Driver code
int main()
{
	// String obj
	string str = "VishnuVishwas";
	// which ends at the '\0'

	// size of string object Using while loop
	// while 'NOT NULL'
	int i = 0;
	while (str[i])
		i++;
	cout << i << endl;

	return 0;
}
