#include <stdio.h>

int main()
{
  int n, i, c = 0;
  
  scanf("%d", &n);
  for (i = n; i > 0; i--)
  {
    if (n % i == 0)
      ++c;
  }
  
  printf("%d\n", c);
  
  return 0;
}
