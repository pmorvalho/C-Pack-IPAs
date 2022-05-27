#include <stdio.h>

int main()
{
  int state = 0; 
  char c;
  
  while ((c = getchar()) != EOF)
  {
    if (state == 0)
    {
      if (c == '"')
        state = 1;
    }
    else if (state == 1)
    {
      if (c == '"')
      {
        state = 0;
        putchar('\n');
      }
      else if (c == '\\')
        state = 2;
      else
        putchar(c);
    }
    else if (state == 2)
    {
      putchar(c);
      state = 1;
    }
  }  
  return 0;
}
