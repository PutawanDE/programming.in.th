#include <iostream>
using namespace std;

int main() {
  int n = 10;
  int modulo[n];
  for(int i = 0; i < n; i++) {
    int input; cin >> input;
    modulo[i] = input % 42;
  }
  
  int distinct = 1; 
  
  // Compare elements to find the number of distinct ones 
  for (int i = 1; i < n; i++) { 
      int j = 0;

      // Check the previous ones with the current one
      for (j = 0; j < i; j++) {
          if (modulo[i] == modulo[j]) {
              break; 
          }
      }

      // If not found earlier, then add
      // Compare i and j to be sure  
      if (i == j) {
          distinct++; 
      }
  }

  cout << distinct; 
}