#include <iostream>
using namespace std;

int main() {
  int num[3]; cin >> num[0] >> num[1] >> num[2];
  string abc; cin >> abc;
  
  int max_num = num[0];
  int min_num = num[0];
  int mid;

  for(int i = 1; i < 3; i++) {
    if(num[i] > max_num) {
      max_num = num[i];
    } 
    if(num[i] < min_num) {
      min_num = num[i];
    }
  }

  for(int x : num) {
    if(max_num != x && min_num != x) {
      mid = x;
    }
  }

  for(int i = 0; i < 3; i++) {
    switch(abc[i]) {
      case 'C' :
        num[i] = max_num;
        break;
      case 'B' :
        num[i] = mid;
        break;
      case 'A' :
        num[i] = min_num;
    }
  }

  cout <<  num[0] << ' ' << num[1] << ' ' << num[2];
  return 0;
}