#include <stdio.h>

#define SEPARADOR '\\'
#define DENTRO 1
#define FORA 0
#define INICIALIZADOR '"'
#define FINALIZADOR '"'


int main()
{
  char c;
  char c_temp = '0';
  int estado = FORA;
  
  while ((c = getchar()) != EOF) {
    if (c_temp != '\\') {
      if (estado == FORA && c == INICIALIZADOR) {
	estado = DENTRO;
      }
      else if (estado == DENTRO && c == FINALIZADOR) {
	estado = FORA;
	putchar('\n');
      }
      else if (estado == DENTRO) {
	putchar(c);
      }
    }
    c_temp = c;
  }
  return 0;
}
