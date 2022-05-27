#include <stdio.h>

#define NUM_PEDIDO 3



int main() {
  int i[NUM_PEDIDO], maior, middle, menor, cont=0;

  while (cont++ < NUM_PEDIDO) {
    scanf("%d", &i[cont-1]);
  }

  if (i[0] <= i[1] && i[1] <= i[2]) {
    maior = i[2];
    middle = i[1];
    menor = i[0];
  }
  else if (i[0] <= i[2] && i[2] <= i[1]) {
    maior = i[1];
    middle = i[2];
    menor = i[0];
  }
  else if (i[1] <= i[0] && i[0] <= i[2]) {
    maior = i[2];
    middle = i[0];
    menor = i[1];
  }
  else if (i[1] <= i[2] && i[2] <= i[0]) {
    maior = i[0];
    middle = i[2];
    menor = i[1];
  }
  else if (i[2] <= i[0] && i[0] <= i[1]) {
    maior = i[1];
    middle = i[0];
    menor = i[2];
  }
  else {
    maior = i[0];
    middle = i[1];
    menor = i[2];
  }

  printf("%d %d %d\n", menor, middle, maior);

  return 0;
}
