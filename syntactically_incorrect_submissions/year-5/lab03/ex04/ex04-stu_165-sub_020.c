
#include <stdio.h>
enum state {
  ZERO,
  NUM,
  SPACE,
};

int nonzero(char c) {
  return (c > '0' && c <= '9');
}

int main() {
  char c; 
  enum state st = ZERO;

  while((c = getchar()) != EOF && c != '\n') {
    switch (st) {
    case ZERO:
      if(c == ' ') {
        printf("0 ");
        st = SPACE;
      } else if(nonzero(c)) {
        printf("%c", c);
        st = NUM;
      }
      break;
    case NUM:
      if(c == '0') {
        printf("0");
      } else if(c == ' ') {
        printf(" ");
        st = SPACE;
      } else if(nonzero(c)) {
        printf("%c", c);
      }
      break;
    case SPACE:
      if(c == '0') {
        st = ZERO;
      } else if(c == ' ') {
        printf(" ");
      } else if(nonzero(c)) {
        printf("%c", c);
        st = NUM;
      }
      break;
    }
  }
  putchar('\n');

  return 0;
}