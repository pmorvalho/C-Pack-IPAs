#include <stdio.h>

#define NUM_PEDIDO 3



int main() {
  int i, maior, cont=0;

  printf("Insira três números inteiros para ver qual é o maior:\n1º número -> ");
  scanf("%d", &i);
  maior = i;
  while (++cont < NUM_PEDIDO) {
    printf("%dº número -> ", cont+1);
    scanf("%d", &i);
    if (i > maior)
      maior = i;
  }

  printf("O maior número inserido pelo utilizardor é: %d\n", maior);

  return 0;
}
