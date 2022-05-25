#include <stdio.h>

#define DENTRO 1
#define FORA 0
#define ZERO -1

int main()
{
  int c;
  int c_debug;
  int estado;

  estado = FORA;
  c = getchar();
  
  while ((c = getchar()) != EOF) {
    c_debug = 0;
    if (estado == FORA) {
      if (c == '0') {
	estado = ZERO;
      }
      else if (c >= '1' && c <= '9') {
	putchar(c);
	estado = DENTRO;
      }
      else {
	putchar(c);
      }
    }
    else if (estado == ZERO) {
      c_debug = '0';
      if (c > '9' || c < '0') {
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
  if (c_debug != 0) {
    putchar(c_debug);
  }
  return 0;
}
