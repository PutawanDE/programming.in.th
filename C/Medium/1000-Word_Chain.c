#include <stdio.h>
#include <string.h>

int main() {
  int size; scanf("%d", &size);
  int n; scanf("%d", &n);
  char word1[size + 1];
  char word2[size + 1];
  scanf("%s", word1);

  for(int i = 1; i < n; i++){   
    int count = 0;
    scanf("%s",word2);
    for(int j = 0 ; j < size; j++) {
      if(word1[j] != word2[j]) {
        count++;
      }
      if(count > 2) {
        break;
      }
    }
    if(count <= 2) {
      strcpy(word1, word2);
    } else {
      break;
    }
  }

  printf("%s", word1);
  return 0;
}