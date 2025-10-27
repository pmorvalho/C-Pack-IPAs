
#include <stdio.h>

enum state{
  INSIDE,
  OUTSIDE,
  BACKSLASH,
};

int main() {
  char c;
  enum state st = OUTSIDE;

  while((c = getchar()) != EOF) {
    switch (st) {
    case OUTSIDE:
      if(c == '"') {
        st = INSIDE;
      } else if(c == '\\') {
        st = BACKSLASH;
      }
      break;
    case INSIDE:
      if (c == '"') {
        st = OUTSIDE;
        putchar('\n');
        break;
      } else if(c == '\\') {
        st = BACKSLASH;
        break;
      }
      printf("%c", c);
      break;
    case BACKSLASH:
      putchar(c);
      st = INSIDE;
      break;
    }
  }

  return 0;
}