#include <stdio.h>

#define DENTRO 0
#define FORA 1

int main ()
{

  int c, prox_c, estado = FORA;

  while ((c = getchar()) != EOF)
    if (c >= '0' && c <= '9')
      if (c != '0')
      {
	estado = DENTRO;
	printf("%c", c);
      }
      else
      {
	prox_c = getchar();
	if (prox_c == '\n' || prox_c == ' ')
	  printf("%c%c", c, prox_c);
	else
	  if (prox_c != '0' && estado == DENTRO)
	    printf("%c%c", c, prox_c);
	  else if (prox_c != '0' && estado == FORA)
	  {
	    estado = DENTRO;
	    printf("%c", prox_c);
	  }
      }
    else
    {
      estado = FORA;
      printf("%c", c);
    }
  printf("\n");
  return 0;
}
