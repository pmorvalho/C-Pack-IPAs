

#include <stdio.h>

int main ()
{
  int N, i; 
  float reaisintrod, min, max;

  scanf("%d", &N);
  scanf("%f", &reaisintrod); 
  min = max = reaisintrod;

   for (i = 1; i < N; i++) 
   {
    scanf("%f", &reaisintrod);
    if (reaisintrod <= min)
    {
        min = reaisintrod;
    }
    if (reaisintrod >= max)
    {
        max = reaisintrod;
    }
   }
   printf("min: %f, max: %f\n", min, max);
   return 0;
}