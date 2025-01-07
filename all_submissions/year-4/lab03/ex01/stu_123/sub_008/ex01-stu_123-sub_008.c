#include <stdio.h>

int main() {
  int n, i, j;

  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    printf("%d", i);
    for (j = 1; j < n; j++)
       printf("\t%d", j + i);
    putchar('\n');
  }

  return 0;
}
