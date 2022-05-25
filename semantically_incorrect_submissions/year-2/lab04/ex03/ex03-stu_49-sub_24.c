#include <stdio.h>

void cruz (int N)
{
  int row, col, passo = 0;

  for (row = 0; row < N; row++)
  {
    for (col = 1; col <= N; col++)
    {
      if ((col - passo == 1) || (col + passo == N))
      {
        if (col == N)
          printf("*\n");
        else 
          printf("* ");
      }
      else if (col == N)
        printf("-\n");
      else
        printf("- ");
    }
    passo++;
  }

}


int main()
{
  int N;

  scanf("%d", &N);

  cruz(N);

  return 0;
}