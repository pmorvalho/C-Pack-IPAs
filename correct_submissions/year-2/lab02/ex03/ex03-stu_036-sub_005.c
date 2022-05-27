#include <stdio.h>

void swap(int *x, int *y) {
  int t;
  t = *x;
  *x = *y;
  *y = t;
}


int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  if (n % m == 0) {
    printf("yes\n");
  } else {
    printf("no\n");
  }
  return 0;
}