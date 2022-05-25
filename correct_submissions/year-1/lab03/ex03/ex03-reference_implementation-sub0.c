#include <stdio.h>

int main() {
  int n,l,c;
  scanf("%d", &n);
  for (l = 0; l < n; ++l) {
      for (c = 0; c < n; ++c) {
          if (c) putchar(' ');
          putchar(((c+1==n-l) || (c==l)) ? '*' : '-');
      }
      putchar('\n');
  }
  return 0;
}
