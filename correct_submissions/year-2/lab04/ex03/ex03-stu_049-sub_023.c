#include <stdio.h>

#define VECMAX 100

int main()
{
  int vec[VECMAX], i, c, n, max = - 1, col, row;

  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    scanf("%d", &c);
    vec[i] = c;
    if (c > max)
      max = c;
  }


  for (row = max; row > 0; row--)
  {
    for (col = 0; col < n; col++)
    {
      if (vec[col] >= row)
        printf("*");
      else
        printf(" ");
    }
    putchar('\n');
  }

  return 0;
}