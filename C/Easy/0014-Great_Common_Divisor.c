#include <stdio.h>

// Euclidean Algorithm
int gcd(int a, int b) {
  if(b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int main(void) {
  int a;
  int b;
  scanf("%d %d", &a, &b);
  printf("%d", gcd(a, b));
  return 0;
}