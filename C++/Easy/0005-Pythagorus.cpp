#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
  double a, b, c; cin >> a >> b;
  c = sqrt((a*a)+(b*b));
  cout << setprecision(6) << fixed;
  cout << c;
}