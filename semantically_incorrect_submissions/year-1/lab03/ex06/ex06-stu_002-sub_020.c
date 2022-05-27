#include <stdio.h>

int main()
{
  int s, c, sum = 0;
  
  for (c = 0; c < 100; ++c)
  {
    s = getchar();
    sum += s;
  }
  
  if (sum % 9 == 0)
    printf("yes\n");
  else
    printf("no\n");
    
  return 0;
}
