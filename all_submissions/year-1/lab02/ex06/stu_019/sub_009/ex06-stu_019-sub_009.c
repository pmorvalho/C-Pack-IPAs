#include <stdio.h>

int main()
{
  int N;
  float prim_num, num, min, max;

  scanf("%d", &N);
  scanf("%f", &prim_num);

  min = prim_num;
  max = prim_num;

  scanf("%f", &num);

  N = N - 2;
  while (N >= 1)
    {
      if (num >= max)
	max = num;
      if (num <= min)
	min = num;

      N = N - 1;
      scanf("%f", &num);
    }
  printf("min: %f, max: %f\n", min, max);
  return 0;
}
