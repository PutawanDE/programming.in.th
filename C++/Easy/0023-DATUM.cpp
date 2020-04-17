#include <iostream>

int main() {
  int D; // Input day
  int M; // Input month
  scanf("%d %d", &D, &M);

  // nth day in week, start the week from Thursday (1st -
  // 1/1/2009), end at the 7th, or 0th day (Wednesday)
  int nthDayInWeek; 
  int days; // days from start of the year
  int offset = 0; // For months that don't have 30 days

  // Check for months that don't have 30 days
  if(M > 1) {
    offset++;
    if(M > 2) {
      offset -= 2;
    }
    if(M > 3) {
      offset++;
    }
    if(M > 5) {
      offset++;
    }
    if(M > 7) {
      offset++;
    }
    if(M > 8) {
      offset++;
    }
    if(M > 10) {
      offset++;
    }
  }
  
  // Calculate days from the start of the year
  days = ((M - 1) * 30) + D + offset;
  nthDayInWeek = days % 7; // Calculate nth day in a week
  
  switch(nthDayInWeek) {
    case 1:
      printf("Thursday");
      break;
    case 2:
      printf("Friday");
      break;
    case 3:
      printf("Saturday");
      break;
    case 4:
      printf("Sunday");
      break;
    case 5:
      printf("Monday");
      break;
    case 6:
      printf("Tuesday");
      break;
    case 0:
      printf("Wednesday");
      break;
  }
}