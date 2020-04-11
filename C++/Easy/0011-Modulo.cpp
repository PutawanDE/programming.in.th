#include <bits/stdc++.h> 
using namespace std;

int main() {
  const int n = 10;
  int modulo[n];
  for(int i = 0; i < n; i++) {
    int input; cin >> input;
    modulo[i] = input % 42;
  }

  int distinct = 0; // number of distinct elements

  // Create a set which only contains unique elements
  // (hash table)
  unordered_set<int> set;
  
  // Traverse
  for(int i = 0; i < n; i++) {

    // If not found in the set
    // (find will return end, if not found)
    // (end returns iterator after the last element)
    if(set.find(modulo[i]) == set.end()) {
     
      // Insert into the set and add distinct
      // (insert randomly)
      set.insert(modulo[i]);
      distinct++;
    }
  }

  cout << distinct; 
}