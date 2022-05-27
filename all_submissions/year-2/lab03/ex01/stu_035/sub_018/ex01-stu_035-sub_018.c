#include <stdio.h>



void quadrado(int N) {
  int i = 0, j;

  while (i++ < N) {
    j = i - 1;
    while (j++ < N + i - 2)
      printf("%d\t", j);
    printf("%d\n", j);
  }
}

int main() {
  int N;
  scanf("%d", &N);
  quadrado(N);

  return 0;
}
