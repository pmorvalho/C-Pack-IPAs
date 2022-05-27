#include <stdio.h>

#define SEPARADOR '\\'
#define DENTRO 1
#define FORA 0
#define ESCAPEFORA -1
#define ESCAPEDENTRO -2
#define INICIALIZADOR '"'
#define FINALIZADOR '"'


int main()
{
  char c;
  int estado = FORA;
  
  while ((c = getchar()) != EOF) {
    if (estado == FORA) {
      if (c == '\\') {
	estado = ESCAPEFORA;
      }
      else if (c == INICIALIZADOR) {
	estado = DENTRO;
      }
    }
    else if (estado == ESCAPEFORA) {
      estado = FORA;
    }
    else if (estado == DENTRO) {
      if (c == '\\') {
	estado = ESCAPEDENTRO;
      }
      else if (c == FINALIZADOR) {
	putchar('\n');
	estado = FORA;
      }
      else if (c == '\\') {
	estado = ESCAPEDENTRO;
      }
      else {
	putchar(c);
      }
    }
    else if (estado == ESCAPEDENTRO) {
      putchar(c);
      estado = DENTRO;
    }
  }
  return 0;
}
