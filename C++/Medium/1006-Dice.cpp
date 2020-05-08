#include <iostream>
#include <string>
using namespace std;

int main() {
  int n; scanf("%d", &n);
  int result[n];

  for(int i = 0; i < n; i++) {
    string input;
    cin >> input;

    int top = 1;
    int front = 2;
    int left = 3;
    int back = 5;
    int right = 4;
    int bottom = 6; 
    int temp;

    for(int j = 0; j < input.length(); j++) {
      switch(input[j]) {
        case 'F':
          temp = bottom;
          bottom = front;
          front = top;
          top  = back;
          back = temp;
          break;
        case 'B':
          temp = top;
          top = front;
          front = bottom;
          bottom = back;
          back = temp;
          break;
        case 'L':
          temp = left;
          left = top;          
          top = right;
          right = bottom;
          bottom = temp;
          break;
        case 'R':
          temp = right;
          right = top;
          top = left;
          left = bottom;
          bottom = temp;
          break;
        case 'C':
          temp = left;
          left = front;
          front = right;
          right = back;
          back = temp;
          break;
        case 'D':
          temp = front;
          front = left;
          left = back;
          back = right;
          right = temp;
          break;
      }
    }
    result[i] = front;
  }

  for(int i = 0; i < n - 1; i++) {
    printf("%d ", result[i]);
  }
  printf("%d", result[n - 1]);
}