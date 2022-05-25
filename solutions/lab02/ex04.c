#include <stdio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
  int n1, n2, n3;
  scanf("%d%d%d", &n1, &n2, &n3);
  if (n1 > n2) swap(&n1,&n2);
  if (n2 > n3) swap(&n2,&n3);
  if (n1 > n2) swap(&n1,&n2);
  printf("%d %d %d\n", n1, n2, n3);
  return 0;
}

