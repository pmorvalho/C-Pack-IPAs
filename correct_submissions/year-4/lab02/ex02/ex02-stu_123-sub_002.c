#include <stdio.h>

int main() {
  int valor1, valor2;

  scanf("%d %d", &valor1, &valor2);

  if (valor1 <= valor2)
    printf("%d\n%d\n", valor1, valor2);
  else
    printf("%d\n%d\n", valor2, valor1);

  return 0;
}
