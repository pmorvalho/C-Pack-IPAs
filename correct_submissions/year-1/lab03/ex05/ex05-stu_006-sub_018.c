#include <stdio.h>


int main()
{
    int status = 0;
    char c;

  while ((c = getchar()) != EOF)
  {
    if (status == 0)
    {
      if (c == '"')
        status = 1;
    }
    else if (status == 1)
    {
      if (c == '"')
      {
        status = 0;
        putchar('\n');
      }
      else if (c == '\\')
        status = 2;
      else
        putchar(c);
    }
    else if (status == 2)
    {
      putchar(c);
      status = 1;
    }
  }

    return 0;
}