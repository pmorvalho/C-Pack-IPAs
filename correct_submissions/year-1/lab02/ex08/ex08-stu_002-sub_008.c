#include <stdio.h>

int main()
{
  int n, i;
  float k, a = 0, media;

  scanf("%d", &n);
  for (i = 0; i < n; ++i)
  {
    scanf("%f", &k);
    a += k;
  }

  media = a / n;
  printf("%.2f\n", media);

  return 0;
}
