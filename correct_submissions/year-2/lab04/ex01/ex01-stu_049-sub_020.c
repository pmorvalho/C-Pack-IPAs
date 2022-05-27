#include <stdio.h>

#define VECMAX 100

int main()
{
  int vec[VECMAX], c;
  int i, n, j;

  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    scanf("%d", &c);
    vec[i] = c;
  }


  for (i = 0; i < n; i++)
  {
    for (j = vec[i]; j > 0; j--)
    {
      printf("*");
    }
    putchar('\n');
  }

  return 0;
}