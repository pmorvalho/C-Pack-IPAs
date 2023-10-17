#include <stdio.h>

int main()
{
  int N, M;

  scanf("%d%d", &N, &M);

  if(N > M)
    printf("\n%d\n%d\n", M, N);
  else
    printf("\n%d\n%d\n", N, M);

  return 0;
}