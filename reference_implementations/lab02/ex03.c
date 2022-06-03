#include <stdio.h>

int main() {
  int n, m;
  scanf("%d%d", &n, &m);
  printf("%s\n", (n%m)==0 ? "yes" : "no");
  return 0;
}

