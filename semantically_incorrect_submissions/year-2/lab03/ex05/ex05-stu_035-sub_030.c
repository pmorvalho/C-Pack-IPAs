#include <stdio.h>

#define FORA 0
#define DENTRO 1



int main() {
  int c, estado = FORA;

  while ((c = getchar()) != '\n') {
    if (estado == DENTRO) {
      putchar(c);
      estado = FORA;
    }
    else if (estado == FORA && c != '\\' && c != '"')
      putchar(c);

    if (c == '\\')
      estado = DENTRO;
  }
  printf("\n");

  return 0;
}
