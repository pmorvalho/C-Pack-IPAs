#include <stdio.h>

void piramide(int N)
{
  int l = 1, i;
  while (l <= N)
  {
    for (i = N - l; i > 0; i--)   
      printf("  ");
    if (l > 1)
    {
      for (i = 1; i <= l; i++)   
        printf("%d ", i);
      for (i = l - 1; i > 1; i--)   
        printf("%d ", i);
      printf("1\n");
    }
    else
      printf("1\n");
    ++l;
  }
}

int main()
{
  int N;
  scanf("%d", &N);
  piramide(N);
  return 0;
}
