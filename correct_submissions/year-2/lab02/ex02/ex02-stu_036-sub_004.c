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
  if (n > m) {
    swap(&n,&m);
  } 
  printf("%d\n%d\n", n, m);
  return 0;
}