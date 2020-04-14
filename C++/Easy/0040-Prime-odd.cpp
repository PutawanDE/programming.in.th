#include <iostream>
using namespace std;

int main() {
  int n; scanf("%d", &n);
  string result[n];
  for(int i = 0; i < n; i++) {
    string num; cin >> num;
    if(num == "2") {
      result[i] = "T";
      continue;
    }
    char end_char = num.back();
    if(end_char == '0' || end_char == '2' || end_char =='4' 
      || end_char == '6' || end_char == '8') {
        result[i] = "F";
    } else {
      result[i] = "T";
    }
  }

  for(int i = 0; i < n; i++) {
    cout << result[i] << "\n";
  }
  return 0;
}