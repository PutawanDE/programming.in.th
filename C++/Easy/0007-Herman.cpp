#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

#define _USE_MATH_DEFINES

int main() {
  double r, euclidean, taxicab; 
  cin >> r;
  euclidean = M_PI * r * r;
  taxicab = 2 * r * r;
  cout << setprecision(6) << fixed;
  cout << euclidean << endl;
  cout << taxicab;
}