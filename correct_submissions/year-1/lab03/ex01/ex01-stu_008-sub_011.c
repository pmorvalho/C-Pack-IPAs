#include <stdio.h>

int main()
{
  int n;
  int i, j;

  scanf("%d", &n);

  for (i = 1; i <= n; ++i)
  {
    for (j = i; j < i + n - 1; ++j)
      printf("%d\t", j);
    printf("%d\n", i + n - 1);
  }

  return 0;
}