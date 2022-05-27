#include <stdio.h>

int main()
{
  int N, row, col, passo = 0;

  scanf("%d", &N);
  for (row = 0; row < N; row++)
  {
    for (col = 1; col <= N; col++)
    {
      if (col == N)
        printf("%d\n", col + passo);
      else
        printf("%d\t", col + passo);
    }
    passo++;
  }

  return 0;
}