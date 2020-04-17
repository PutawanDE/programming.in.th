#include <iostream>

int main() {
  int x;
  int y;
  int result;
  scanf("%d %d", &x, &y);

  if(x > y) {
    printf("2");
    return 0;
  }

  result = y / x;
  if(y % x != 0) {
    result++;
  }
  printf("%d", result);
  return 0; 
}