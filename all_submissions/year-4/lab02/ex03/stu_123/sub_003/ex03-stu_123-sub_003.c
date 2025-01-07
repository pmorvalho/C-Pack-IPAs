#include <stdio.h>

int main() {
  int valor1, valor2;

  scanf("%d %d", &valor1, &valor2);

  printf("%s\n", valor1 % valor2 == 0 ? "yes" : "no");

  return 0;
}
