#include <stdio.h>



int main()
{
  int num = 0;
  char c;
  
  while((c = getchar()) != EOF)
  {
    if (c >= '0' && c <= '9')
      num = (num * 10) + (c - '0');
    else if (c == ' ' || c == '\n')
    {
      printf("%d%c", num, c);
      num = 0;
    }
  }
  
  return 0;
}
