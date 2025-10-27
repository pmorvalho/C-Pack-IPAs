
#include <stdio.h>

int main() {
  int valor1, valor2;
  int tmp;

  scanf("%d %d", &valor1, &valor2);

  

  if (valor1 < valor2) {
    tmp = valor2;
    valor2 = valor1;
    valor1 = tmp;
  }

  printf("%d\n%d\n", valor2, valor1);
  return 0;
}

