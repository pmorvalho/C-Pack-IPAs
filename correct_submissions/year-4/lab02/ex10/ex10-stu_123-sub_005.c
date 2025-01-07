#include <stdio.h>


int main() {
  int n;
  int digitos = 0;
  int soma = 0;

  scanf("%d", &n);

  while (n > 0) {
    soma += n % 10;
    n /= 10;
    digitos++;
  }

  printf("%d\n%d\n", digitos, soma);
  return 0;
}
