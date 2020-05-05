#include <iostream>
#include <string>
using namespace std;

int main() {
  string input;
  cin >> input;
  int len = input.length();
  int sum = 0;

  if(len > 2) {
    int num = 0;
    if(len % 2 != 0) {
      num = stoi(input.substr(0, 1));
      sum += num;
      for (int i = 1; i < len; i += 2) {
        num = stoi(input.substr(i, 2));
        sum += num;
      }
    } else {
      for (int i = 0; i < len; i += 2) {
        num = stoi(input.substr(i, 2));
        sum += num;
      }
    }
  } else {
    sum = stoi(input);
  }
  int r3 = sum % 3;
  int r11 = sum % 11;
  printf("%d %d", r3, r11);
}