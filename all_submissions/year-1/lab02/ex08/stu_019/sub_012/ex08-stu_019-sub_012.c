# include <stdio.h>

int main()
{
  int N, iter;
  float media, num;

  media = 0.0;
  scanf("%d", &N);

  for (iter = N; iter >= 1; iter = iter - 1)
    {
      scanf("%f", &num);
      media = media + num / N;
    }
  printf("%.2f\n", media);
  return 0;
}
