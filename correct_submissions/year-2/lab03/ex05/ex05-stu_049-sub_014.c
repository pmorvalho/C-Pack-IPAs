#include <stdio.h>

#define FORA 1
#define ESC 2
#define DENTRO 3

int main()
{
  int c, estado = FORA;

  while ((c = getchar()) != EOF)
  {
    switch(estado)
    {
      case FORA:
        if (c == '"')
          estado = DENTRO;
        break;
      case DENTRO:
        switch(c)
        {
          case '\\':
            estado = ESC;
            break;
          case '"':
            putchar('\n');
            estado = FORA;
            break;
          default:
            putchar(c);
        }
      break;
    case ESC:
      putchar(c);
      estado = DENTRO;
      break;
    }
  }

  return 0;
}