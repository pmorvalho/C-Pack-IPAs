
#include <stdio.h>

int max(int a, int b) {
  return (a > b) ? a : b;
}

int main() {
  int n1, n2, n3, maxnum;
  scanf("%d %d %d", &n1, &n2, &n3);
  maxnum = max(n3, max(n1, n2));

  printf("%d\n", maxnum);
  return 0;
}