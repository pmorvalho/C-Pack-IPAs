
#include <stdio.h>

enum estado {FORA, ZERO, NAO_ZERO};

int main() {
  int c;
  enum estado est = FORA;

  while ((c = getchar()) != EOF) {
    switch (est) {
      case FORA:
        if (c == '0')
          est = ZERO;
        else if (c >= '1' && c <= '9') {
          putchar(c);
          est = NAO_ZERO;
        }
        break;

     case ZERO:
       if (c >= '1' && c <= '9') {
          putchar(c);
          est = NAO_ZERO;
        } else if (c == ' ' || c == '\n') {
          printf("0%c", c);
          est = FORA;
        }
        break;

     case NAO_ZERO:
        if (c >= '0' && c <= '9')
          putchar(c);
        else if (c == ' ' || c == '\n') {
          putchar(c);
          est = FORA;
        }
        break;
    }
  }
  return 0;
}

