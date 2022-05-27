#include <stdio.h>

#define VECMAX 100

int main()
{
  int n, i, j;
  int nums[VECMAX];

  scanf("%d", &n);
  for(i = 0; i < n; i++)
    scanf("%d", &nums[i]);

  for(i = 0; i < n; i++)
  {
    for(j = 0; j < nums[i]; j++)
      printf("*");
    printf("\n");
  }

  return 0;
}
