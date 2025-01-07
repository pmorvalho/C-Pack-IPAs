#include <stdio.h>

enum estado { FORA, ESC, DENTRO };

int main() {
  enum estado est = FORA;
  int c;
  while ((c = getchar()) != EOF) {
    switch (est) {
      case FORA:
        if (c == '"')
          est = DENTRO;
          break;
      case DENTRO:
        if (c == '\\')
          est = ESC;
        else if (c == '"') {
          est = FORA;
          putchar('\n');
        } else
          putchar(c);
        break;
      case ESC:
        est = DENTRO;
        putchar(c);
    }
  }
  return 0;
}
