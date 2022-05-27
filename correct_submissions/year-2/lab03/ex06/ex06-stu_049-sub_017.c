#include <stdio.h>

int main()
{
  int c, acumulador = 0;

  while ((c = getchar()) != EOF)
  {
    if (c >= '0' && c <= '9')
      acumulador += (c - '0');
  }

  if (acumulador % 9 == 0)
    printf("yes\n");
  else
    printf("no\n");

  return 0;
}