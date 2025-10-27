
#include <stdio.h>

int main() {
  int N, resto, size = 0, sum = 0;

  scanf("%d", &N);
  while (N != 0) {
    resto = N % 10;
    sum += resto;
    size++;
    N = N / 10;
  }

  printf("%d\n%d\n", size, sum);

  return 0;
}