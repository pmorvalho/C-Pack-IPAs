#include <stdio.h>

int main() {
  int n, m;
  scanf("%d%d", &n, &m);
  printf("%d\n", n<m ? n : m);
  printf("%d\n", n<m ? m : n);
  return 0;
}

