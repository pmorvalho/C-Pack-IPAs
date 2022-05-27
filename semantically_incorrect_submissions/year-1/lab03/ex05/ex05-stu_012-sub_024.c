#include <stdio.h>

#define FORA 0
#define DENTRO 1

int main() {
  int c, estado=FORA;
  while ((c=getchar())!=EOF) {
    if (c=='\"') {
      if (estado==FORA) {
        estado=DENTRO;
      } else {
        estado=FORA;
        printf("\n");
      }
    } else if (estado==DENTRO) {
      putchar(c);
    }
  }
  return 0;
}