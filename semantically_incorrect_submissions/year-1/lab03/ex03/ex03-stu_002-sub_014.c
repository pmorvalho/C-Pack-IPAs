#include <stdio.h>

void cruz(int N)
{
  int l = 1, i;
  while (l <= N / 2)   
  {
    for (i = l - 1; i > 0; i--)   
      printf("- ");
    printf("* ");
    for (i = N - 2*l; i > 0; i--)   
      printf("- ");
    if (l == 1)
      printf("*\n");
    else
    {
      printf("* ");
      for (i = l - 1; i > 1; i--)   
        printf("- ");
      printf("-\n");
    }
    ++l;
  }
  while (l <= N)   
  {
    for (i = N - l; i > 0; i--)   
      printf("- ");
    printf("* ");
    for (i = 2*(l - 1) - N; i > 0; i--)   
      printf("- ");
    if ((N % 2 == 0) || (l != N / 2 + 1)) {  
      if (l == N)
        printf("*\n");
      else
      {
        printf("* ");
        for (i = N - l; i > 1; i--)   
          printf("- ");
        printf("-\n");
      } }
    ++l;
  }
}

int main()
{
  int N;
  scanf("%d", &N);
  cruz(N);
  return 0;
}
