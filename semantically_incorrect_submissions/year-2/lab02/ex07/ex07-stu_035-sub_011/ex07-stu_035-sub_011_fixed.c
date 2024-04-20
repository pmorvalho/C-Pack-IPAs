#include <stdio.h>



int main() {
  int n, count = 0;
  int i = 0;
  scanf("%d", &n);
  while (count++ <= n)
    if (n % count == 0)
      i++;
  printf("%d\n", i);
  return 0;
}
