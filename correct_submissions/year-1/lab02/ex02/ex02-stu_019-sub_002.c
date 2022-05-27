#include <stdio.h>

int main()
{
  int N, M;

  scanf("%d%d", &N, &M);

  if (N < M)
    {
      printf("%d\n", N);
      printf("%d\n", M);
    }
  else
    {
      printf("%d\n", M);
      printf("%d\n", N);
    }
  return 0;
}
