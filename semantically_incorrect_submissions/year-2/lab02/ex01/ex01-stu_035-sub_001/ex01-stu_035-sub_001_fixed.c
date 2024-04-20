#include <stdio.h>

#define NUM_PEDIDO 3



int main() {
  int i, maior, cont=0;

  
  scanf("%d", &i);
  maior = i;
  while (++cont < NUM_PEDIDO) {
    
    scanf("%d", &i);
    if (i > maior)
      maior = i;
  }

  printf("%d\n", maior);

  return 0;
}
