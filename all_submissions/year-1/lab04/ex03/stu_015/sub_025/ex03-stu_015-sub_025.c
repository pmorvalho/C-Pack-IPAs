#include <stdio.h>

#define VECMAX 100

int main()
{
    int n, i, j;
    int max = 0;
    int vec[VECMAX];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &vec[i]);
        if (max = vec[i])
         max = vec[i];
    }

     for (i = 0; i < max; ++i)

  {

    for (j = 0; j < n; ++j)

      printf(max - i <= vec[j] ? "*" : " ");

    printf("\n");

  }

  return 0;

}