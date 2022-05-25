#include <stdio.h>

int main() {
  int n, i, s;
  scanf("%d", &n);

  s = 0;
  for (i = 1; i <= n; ++i)
       if ((n % i) == 0) ++s;

  printf("%d\n", s);

  return 0;
}

