#include <stdio.h>

int main(void) {
  int page; scanf("%d", &page);
  int count_i = 0;
  int count_v = 0;
  int count_x = 0;
  int count_l = 0;
  int count_c = 0;

  for(int p = 1; p <= page; p++) {
    switch((int)(p / 100)) {
      case 1:
        count_c++;
        break;
      case 2:
        count_c += 2;
        break;
      case 3:
        count_c += 3;
        break;
    }
    
    switch((int)((p % 100)/10)) {
      case 1:
        count_x++;
        break;
      case 2:
        count_x += 2;
        break;
      case 3:
        count_x += 3;  
        break;
      case 4:
        count_x++;
        count_l++;
        break;
      case 5:
        count_l++;
        break;
      case 6:
        count_x++;      
        count_l++;
        break;
      case 7:
        count_x += 2;      
        count_l++;
        break;
      case 8:
        count_x += 3;      
        count_l++;
        break;
      case 9:
        count_x++;      
        count_c++;
        break;
    }

    switch(p % 10) {
      case 1:
        count_i++;
        break;
      case 2:
        count_i += 2;
        break;
      case 3:
        count_i += 3;
        break;
      case 4:
        count_i++;
        count_v++;
        break;
      case 5:
        count_v++;
        break;
      case 6:
        count_i++;
        count_v++;
        break;
      case 7:
        count_i += 2;
        count_v++;
        break;
      case 8:
        count_i += 3;
        count_v++;
        break;
      case 9:
        count_i++;
        count_x++;
        break;
    }
  }

  printf("%d %d %d %d %d", count_i, count_v, 
  count_x, count_l, count_c);
  return 0;
}