#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  // Create a hash table
  unordered_map<string, int> hash_table;

  // Insert some key-value pairs into the hash table
  hash_table["one"] = 1;
  hash_table["two"] = 2;
  hash_table["three"] = 3;

  // Look up a value in the hash table
  int value = hash_table["two"];

  // Print the value
  cout << value << endl;

  return 0;
}