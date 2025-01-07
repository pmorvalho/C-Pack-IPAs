

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main() {

  int c, c_next;
  bool inside = false;

  while ((c = getchar()) != EOF) {
    
    if (isdigit(c) && (inside == false)) {
      inside = true;

      
      c_next = getchar();
      while (c == '0' && isdigit(c_next)) {
        c = c_next;
        c_next = getchar();
      }

      
      putchar(c);
      putchar(c_next);

      
      if (!isdigit(c_next)) {
        inside = false;
      }
      continue;

    } else if (!isdigit(c)) {
      inside = false;
    }

    putchar(c);
  }

  return 0;
}