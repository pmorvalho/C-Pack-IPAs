#include <stdio.h>



int main() {
  int n, count = 0;

  scanf("%d", &n);
  while (count++ <= n)
    if (n % count == 0)
      printf("%d\n", n);

  return 0;
}
