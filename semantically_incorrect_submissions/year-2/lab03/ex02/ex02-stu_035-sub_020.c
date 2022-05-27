#include <stdio.h>



void piramide(int N) {
  int i = 0, j = 0, num = 0;

  while (i++ < N) {
    while (j++ < N - i)
      printf(" ");
    while (num++ < i)
      printf("%d", num);
    num--;
    while (--num > 0)
      printf("%d", num);
    printf("\n");
    j = 0;
    num = 0;
  }
}

int main() {
  int N;
  scanf("%d", &N);
  piramide(N);

  return 0;
}
