#include <stdio.h>



int main() {
  int n, count = 0, soma = 0, last_dig;

  scanf("%d", &n);

  while (n != 0) {
    last_dig = n % 10;
    n /= 10;
    soma += last_dig;
    count++;
  }

  printf("%d\n%d\n", count, soma);

  return 0;
}
