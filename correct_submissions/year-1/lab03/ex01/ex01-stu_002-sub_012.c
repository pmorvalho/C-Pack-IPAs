#include <stdio.h>

void quadrado(int N)
{
  int l = 1, c, i;
  while (l <= N) {
    c = 1, i = l;
    while (c < N) {
      printf("%d\t", i);
      ++c, ++i;
    }
    printf("%d\n", i);
    ++l;
  }
}

int main()
{
  int N;
  scanf("%d", &N);
  quadrado(N);
  return 0;
}
