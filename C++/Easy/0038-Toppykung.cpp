#include <bits/stdc++.h> 

using namespace std;

int main() {
  int n; cin >> n;

  set<string> set;
  for(int i = 0; i < n; i++) {
    string joke; cin >> joke;
    if(set.find(joke) == set.end()) {
      set.insert(joke);
    }  
  }

  for (string const& joke : set)
  {
    cout << joke << '\n';
  }
  return 0;
}