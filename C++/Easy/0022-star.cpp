#include <iostream>

int main() {
  int input;
  scanf("%d", &input);
  
  if(input % 2 != 0) {
    int center = (input / 2) + 1;
    int centerLine = (input - 1) / 2;

    for(int i = 0; i < input; i++) {
      for(int j = 1; j <= input; j++) {
        if(i > centerLine) {
          if(j == 1 + (i - centerLine) || 
              j == input - (i - centerLine)) {
            printf("*");
            continue;
          }
        } else if(j == center - i || j == center + i) {
          printf("*");
          continue;
        } 
        printf("-");
      }
      printf("\n");
    }
  } else {
    int center = (input / 2);
    int centerLine = center + 1;
    
    for(int i = 0; i < input; i++) {
      for(int j = 1; j < input; j++) {
        if(i > center) {
          if(j == 1 + (i - center) || 
              j == (input - 1) - (i - center)) {
            printf("*");
            continue;
          }
        } else if(i == center || i == center - 1) {
          if(j == 1 || j == input - 1) {
            printf("*");
            continue;
          }
        } else if(j == center - i || j == center + i) {
          printf("*");
          continue;
        } 
        printf("-");
      }
      printf("\n");
    }
  }
}
