#include <stdio.h>

#define FORA 0
#define DENTRO 1



int main() {
  int c, estado = FORA;

  while ((c = getchar()) != EOF)
	if (estado == DENTRO)
      putchar(c);
    else if (c != 48) {
      putchar(c);
      estado = DENTRO;
    }

  return 0;
}
