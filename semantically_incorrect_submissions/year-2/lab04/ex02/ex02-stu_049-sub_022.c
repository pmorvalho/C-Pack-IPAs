#include <stdio.h>

void piramide(int N)
{
  int l, c;

  for (l = 0; l < N; l++)
  {
    for (c = 0; c < N - l - 1; c++)
      printf("  ");
    for (c = 0; c < l + 1; c++)
    {
      if (c != 0)
        putchar(' ');
      printf("%d", c + 1);
    }

    for (c = 0; c < l; c++)
      printf(" %d", l - c);
    putchar('\n');
  }
}

int main()
{
  int N;

  scanf("%d", &N);

  piramide(N);

  return 0;
}
