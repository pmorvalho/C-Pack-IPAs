
#include <stdio.h>

int main() {
  int n, soma, n_digitos;

  soma = 0;
  n_digitos = 0;

  scanf("%d", &n);

  while (n) {
    n_digitos++;
    soma += n % 10;
    n /= 10;
  }

  printf("%d\n%d\n", n_digitos, soma);
  return 0;
}

