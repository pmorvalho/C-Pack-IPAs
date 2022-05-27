#include <stdio.h>
#define VECMAX 100

void fill_vec(int vector[], int limit);
void rep_vec(int vector[], int limit);

int main()
{
  int n, vec[VECMAX];
  scanf("%d", &n);
  
  if (n < VECMAX)
  {
    fill_vec(vec, n);
    rep_vec(vec, n);
  }
  return 0;
}

void fill_vec(int vector[], int limit)
{
  int i;
  for (i = 0; i < limit; i++)
    scanf("%d", &vector[i]);
}

void rep_vec(int vector[], int limit)
{
  int i, j;
  for (i = 0; i < limit; i++)
  {
    for (j = 0; j < vector[i]; j++)
      printf("*");
    printf("\n");
  }
}
