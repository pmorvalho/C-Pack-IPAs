#include <stdio.h>

#define FORA 0
#define DENTRO 1



int main() {
  int c, estado = FORA;

  while ((c = getchar()) != EOF)
    if (c != ' ' && c != '\n' && estado == DENTRO)
      putchar(c);
    else if (c != ' ' && c != '\n' && c != 48) {
      putchar(c);
      estado = DENTRO;
    }
  printf("\n");

  return 0;
}
