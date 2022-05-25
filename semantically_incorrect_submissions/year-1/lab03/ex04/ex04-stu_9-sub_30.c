#include <stdio.h>

#define DENTRO 1
#define FORA 0
#define ZERO 1
#define NAOZERO 0


int main()
{
  char c;
  int estado;
  int estado0;
  
  c = getchar();
  while (c != EOF) {
    if (c == ' ' || c == '\n') {
      if (estado0 == ZERO) {
	putchar('0');
	estado0 = NAOZERO; 
      }
      putchar(c);
      estado = FORA;
    }
    else if (estado == FORA) {
      estado = DENTRO;
      if (c == '0') {
	estado0 = ZERO;
      }
      else {
	putchar(c);
      }
    }
    else if (estado0 == ZERO) {
      if (c != '0') {
	estado0 = NAOZERO;
	putchar(c);
      }
    }
    else {
      putchar(c);
    }
    c = getchar();
  }
  printf("\n");
  return 0;
}
