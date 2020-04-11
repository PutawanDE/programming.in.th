#include <iostream> 
#include <cmath>
using namespace std;

int main() {
  int n; scanf("%d", &n);
  long double num[n];

  for(int i = 0; i < n; i++) {
    long double input;
    scanf("%Lf", &input);
    num[i] =  pow(2, input);
  }

  for(int i = 0; i < n; i++) {
    printf("%.0Lf\n", num[i]);
  }
  return 0;
}