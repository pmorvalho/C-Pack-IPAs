
#include <stdio.h>

int main() {
  int n, j, r, l;

  scanf("%d", &n);
  r = n;
  l = 1;

  while (l <= n) {
    for (j = 1; j < n; j++)
      printf("%c ", (l == j || r == j) ? '*' : '-');
    printf("%c\n", (l == j || r == j) ? '*' : '-');
    r--;
    l++;
  }

  return 0;
}
