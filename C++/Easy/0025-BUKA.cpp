#include <iostream>
#include <string>
using namespace std;

int main() {
  string num1; cin >> num1;
  string operand; cin >> operand;
  string num2; cin >> num2;
  string result;

  int len1 = num1.length();
  int len2 = num2.length();

  if(operand == "+") {
    if(len1 > len2) {
      num1[len1 - len2] = '1';
      result = num1;
    }
    if(len1 < len2) {
      num2[len2 - len1] = '1';
      result = num2;
    }
    if(len1 == len2) {
      num1[0] = '2';
      result = num1;
    }
  }

  if(operand == "*") {
    num1.insert(1, num2.substr(1, len2));
    result = num1;
  }

  cout << result;
}