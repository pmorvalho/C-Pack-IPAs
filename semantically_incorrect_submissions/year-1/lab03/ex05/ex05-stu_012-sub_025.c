#include <stdio.h>

#define F 0
#define D 1

int main() {
  int c, est=F, exc=F, s;
  while ((c=getchar())!=EOF) {
    if (c=='\"' && est==F) {
      if (s==1) {
        printf("\n");
      } else {
        s = 1;
      }
      est=D;
    } else if (est==D) {
      if (c=='\"') {
        if (exc==D) {
          putchar(c);
          exc=F;
        } else {
          est=F;
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