
enum state {OUTSIDE_STRING, INSIDE_STRING, BACKSLASH};
#include <stdio.h>


int main() {
  char current;
  enum state state = OUTSIDE_STRING;

  while ((current = getchar()) != EOF) {
    switch (state) {
    case OUTSIDE_STRING:
      if (current == '"') {
        state = INSIDE_STRING;
      }
      break;
    case INSIDE_STRING:
      if (current == '"') {
        state = OUTSIDE_STRING;
        putchar('\n');
        break;
      }
      if (current == '\\') {
        state = BACKSLASH;
        break;
      }
      printf("%c", current);
      break;

    case BACKSLASH:
      putchar(current);
      state = INSIDE_STRING;
      break;
    }
  }

  return 0;
}
  