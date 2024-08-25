#include <stdio.h>
int main() {
  int N;
  scanf("%d", &N);
  for (int i = 0; i < N; N--) {
    for (int j = 0; j < N; j++) {
      if (i < j) {
        printf(" ");
      } else {
        printf("*");
      }
    }
    printf("\n");
  }
return 0;
}
