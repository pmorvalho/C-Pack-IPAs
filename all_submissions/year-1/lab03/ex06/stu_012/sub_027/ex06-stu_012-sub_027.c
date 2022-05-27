#include <stdio.h>

int main() {
  int c, d;
  while ((c=getchar())!=EOF) {
    if ('0' <= c && c <= '9') {
      d += (c - '0');
    }
  }
  if (d%9==0) {
    printf("yes\n");
  } else {
    printf("no\n");
  }
  return 0;
}