#include <stdio.h>

int main() {
  int n,l,c;
  scanf("%d", &n);
  for (l = 0; l < n; ++l) {
      for (c = 0; c < n - l - 1; ++c) printf("  ");
      for (c = 0; c < l + 1; ++c) {
          if (c) putchar(' ');
          printf("%d", c+1);
      }
      for (c = 0; c < l; ++c)
          printf(" %d", l - c);
      putchar('\n');
  }
  return 0;
}
