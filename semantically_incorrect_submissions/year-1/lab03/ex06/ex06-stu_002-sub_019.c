#include <stdio.h>

int main()
{
  int i, c = 0, soma = 0;
  
  i = getchar();
  while (c < 100)
  {
    soma += i;
    ++c;
    i = getchar();
  }
  if (soma % 9 == 0)
    printf("yes\n");
  else
    printf("no\n");
  return 0;
}
