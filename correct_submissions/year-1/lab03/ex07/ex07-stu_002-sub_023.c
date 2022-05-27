#include <stdio.h>

int main()
{
  
  int result = 0, state = 0, current = 0;
  char c;

  while ((c = getchar()) != '\n')
  {
    if (c == '+' || c == '-')
    {
      if (state == 0)
        result += current;
      else
        result -= current;
      state = c != '+';
      current = 0;
    }
    
    else if (c >= '0' && c <= '9')
      current = current * 10 + (c - '0');
  }
  
  if (state == 0)
    result += current;
  else
    result -= current;
  
  printf("%d\n", result);
  return 0;
}

