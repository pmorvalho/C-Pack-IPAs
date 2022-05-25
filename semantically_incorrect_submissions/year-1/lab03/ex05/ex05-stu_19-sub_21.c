#include <stdio.h>

#define DENTRO 0
#define FORA 1

int main ()
{
  int c, prox_c, estado = FORA;

  while (estado == FORA)
    {
    c = getchar();
    if (c == '"')
      estado = DENTRO;
    }

  while ((c = getchar()) != EOF)
    if (c == '"' && estado == FORA)
    {
      estado = DENTRO;
      printf("\n");
    }
    else if (c != '"' && c != 92 && estado == DENTRO)
	printf("%c", c);
    else if (c != '"' && c == 92 && estado == DENTRO)
    {
      prox_c = getchar();
      printf("%c", prox_c);
    }
    else if (c == '"' && estado == DENTRO)
      estado = FORA;
  return 0;
}
