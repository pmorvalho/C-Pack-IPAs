#include <stdio.h>

int main() {
  int valor1, valor2, valor3;
  int maior;

  scanf("%d %d %d", &valor1, &valor2, &valor3);

  if (valor1 >= valor2 && valor1 >= valor3)
    maior = valor1;
  else if (valor2 >= valor3)
    maior = valor2;
  else
    maior = valor3;

  printf("%d\n", maior);
  return 0;
}
