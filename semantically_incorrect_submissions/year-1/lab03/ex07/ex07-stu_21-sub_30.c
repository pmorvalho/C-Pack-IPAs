#include <stdio.h>

int main()
{
  
    int result = 0, state = 2, current = 0;
    char c;


  while ((c = getchar()) != EOF)
  {
    if (c == '+' || c == '-')
    {
        if (state != 2)
        {
            if (state == 0)
                result += current;
            if (state == 1)
                result -= current;
        }
        if (c == '+')
            state = 0;
        if (c == '-')
            state = 1;
    }
    else if (c >= '0' && c <= '9')
    {
      current = current * 10 + (c - '0');
    }
  }

    if (state == 0)
        result += current;
    if (state == 1)
        result -= current;

  printf("%d\n", result);

  return 0;
}