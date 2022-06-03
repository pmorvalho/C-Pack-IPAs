#include <stdio.h>

int main() {
  int n,l,c;
  scanf("%d", &n);
  for (l = 0; l < n; ++l) {
      for (c = 0; c < n; ++c) {
          if (c) putchar('\t');
          printf("%d", l+c+1);
      }
      putchar('\n');
  }
  return 0;
}
