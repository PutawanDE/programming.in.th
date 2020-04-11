#include <stdio.h>

int main() {
  int m; // row
  int n; // column
  scanf("%d%d",&m,&n);
  int m1[m][n];
  int m2[m][n];

  int r, c;
  // Input for matrix 1
  for(r = 0; r < m; r++) {
    for(c = 0; c < n; c++) {
      scanf("%d", &m1[r][c]);
    }
  }
  // Input for matrix 2
  for(r = 0; r < m; r++) {
    for(c = 0; c < n; c++) {
      scanf("%d", &m2[r][c]);
    }
  }
  // Add + Output both matrixes
  for(r = 0; r < m; r++) {
    for(c = 0; c < n; c++) {
        printf("%d ", m1[r][c] + m2[r][c]);
      }
      printf("\n");
  }
  return 0;
}