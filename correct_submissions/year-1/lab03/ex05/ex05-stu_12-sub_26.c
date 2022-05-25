#include <stdio.h>

#define F 0
#define D 1

int main() {
  int c, est=F, exc=F;
  while ((c=getchar())!=EOF) {
    if (c=='\"' && est==F) {
      est=D;
    } else if (est==D) {
      if (c=='\"') {
        if (exc==D) {
          putchar(c);
          exc=F;
        } else {
          est=F;
          printf("\n");
        }
      } else if (c=='\\') {
        if (exc==D) {
          putchar(c);
          exc=F;
        } else {
          exc=D;
        }
      } else {
        putchar(c);
      }
    }
  }
  return 0;
}