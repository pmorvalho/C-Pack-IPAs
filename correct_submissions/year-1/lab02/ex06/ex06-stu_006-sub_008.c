#include <stdio.h>

int main()
{
  int n, i;
  float min, max, k;
  
  scanf("%d", &n);
  scanf("%f", &max);
  min = max;

  for (i = 1; i < n; ++i)
  {
      scanf("%f", &k);
      if (k < min)
      min = k;
      if (k > max)
      max = k;
  }

    printf("min: %f, max: %f\n", min, max);

return 0;
}