#include <stdio.h>

#define DIM 100

int main()
{
  int c, i;
  char s[DIM];

  c = getchar();

  for (i = 0; i < DIM - 1 && c != EOF; i++)
  {
    if (c != '0')
    {
      s[i] = c;
      printf("%c", c);
    }
    c = getchar();
  }

  s[i] = '\0';

  printf("%s\n", s);

  return 0;
}