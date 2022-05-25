#include <stdio.h>

void swap(int *x, int *y) {
  int t;
  t = *x;
  *x = *y;
  *y = t;
}


int main() {
  int n, i;
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    printf("%d\n", i);
  }
  return 0;
}