#include <stdio.h>

int main()
{
  int n, i;
  float media = 0, k;
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
    {
        scanf("%f", &k);
        media += k;
    }

    media = media / n;
    printf("%.2f\n", media);
    return 0;
}