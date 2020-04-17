#include <iostream>
#include <cmath>

//(ax + b)(cx + d) เมื่อ A = ac, B = ad + bc, C = bd

int a = 0;
int b = 0;
int c = 0;
int d = 0;
int simplify_numerator;
int simplify_denominator;

void SimplifyFraction (int numerator, int denominator)
{
  int i;
  if(numerator < 0) {
    numerator *= -1;
  }
  for (i = denominator * numerator; i > 1; i--) {  
    if ((denominator % i == 0) && (numerator % i == 0)) {
      denominator /= i;  
      numerator /= i;  
    }
  }
  simplify_numerator = numerator;
  simplify_denominator = denominator;
}

int main() {
  int A;
  int B;
  int C;
  scanf("%d %d %d", &A, &B, &C);

  float numeratorPositive;
  float numeratorNegative;
  float insideSqrt;

  insideSqrt = (B * B) - (4 * A * C);
  if(insideSqrt < 0) {
    printf("No Solution");
    return 0;
  }

  numeratorPositive = -B + sqrt(insideSqrt);
  numeratorNegative = -B - sqrt(insideSqrt);
  int denominator = 2 * A;
  
  SimplifyFraction(numeratorPositive, denominator);
  c = simplify_denominator;
  d = simplify_numerator;
  SimplifyFraction(numeratorNegative, denominator);
  a = simplify_denominator;
  b = simplify_numerator;

  printf("%d %d %d %d", a,b,c,d);
  return 0;
}