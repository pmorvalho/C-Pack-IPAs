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
      else {
	putchar(c);
      }
    }
    else if (estado == ZERO) {
      if (c == ' ') {
	putchar('0');
      }
      else if (c != '0') {
	estado = DENTRO;
      }
    }
    else if (estado == DENTRO) {
      if (c >= '0' && c <= '9') {
	putchar(c);
      }
      else {
	estado = FORA;
      }
    }
  }
  return 0;
}
