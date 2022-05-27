#include <stdio.h>

#define DENTRO 1
#define FORA 0
#define ZERO -1

int main()
{
  char c;
  int estado = FORA;
  while ((c = getchar()) != EOF) {
    if (estado == FORA) {
      if (c == '0') {
	estado = ZERO;
      }
      else if (c != ' ' && c != '\n' && c != '\t') {
	putchar(c);
	estado = DENTRO;
      }
      else {
	putchar(c);
      }
    }
    else if (estado == ZERO) {
      if (c == ' ' || c == '\n' || c == '\t') {
	putchar('0');
	putchar(c);
	estado = FORA;
      }
      else if (c != '0') {
	putchar(c);
	estado = DENTRO;
      }
    }
    else if (estado == DENTRO) {
      if (c >= '0' && c <= '9') {
	putchar(c);
      }
      else {
	putchar(c);
	estado = FORA;
      }
    }
  }
  putchar('\n');
  return 0;
}
