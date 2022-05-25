#include <stdio.h>



int main() {
  int n, i = 0, count = 0;

  scanf("%d", &n);
  while (count++ <= n)
    if (n % count == 0)
      i++;

  printf("%d\n", i);

  return 0;
}
