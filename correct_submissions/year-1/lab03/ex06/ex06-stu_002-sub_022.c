#include <stdio.h>

int main()
{
  int sum = 0;
  char scan;
  
  while ((scan = getchar()) != EOF)
  {
    if (scan >= '0' && scan <= '9')
      sum += scan - '0';
  }
  
  if (sum % 9 == 0)
    printf("yes\n");
  else
    printf("no\n");
    
  return 0;
}
