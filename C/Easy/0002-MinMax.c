#include <stdio.h>

struct pair {
  int min;
  int max;
};

struct pair getMinMax(int arr[], int l) {
  struct pair minmax;
  int i;

  if(l%2 == 0) {
    if(arr[0]> arr[1]) {
      minmax.max = arr[0];
      minmax.min = arr[1];
    } else {
      minmax.max = arr[1];
      minmax.min = arr[0];
    }
    i = 2;
  } else {
    minmax.max = arr[0];
    minmax.min = arr[0];
    i = 1;
  }

  while(i < l-1) {
    if(arr[i] > arr[i+1]) {
      if(arr[i] > minmax.max) {
        minmax.max = arr[i];
      }
      if(arr[i+1] < minmax.min) {
        minmax.min = arr[i+1];
      }
    } else {
      if(arr[i+1] > minmax.max) {
        minmax.max = arr[i+1];
      }
      if(arr[i] < minmax.min) {
        minmax.min = arr[i];
      }
    }
    i += 2;
  }

  return minmax;
}

int main() {
  int n;
  scanf("%d", &n);
  int A[n];
  for(int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }
  struct pair minmax = getMinMax(A, n);
  printf("%d\n", minmax.min);
  printf("%d\n", minmax.max);
  return 0;
}