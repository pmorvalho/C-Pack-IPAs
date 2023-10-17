

#include <stdio.h>

#define INTEIROS 3

int main() {
  int max, numero, i = 1;
  scanf("%d", &max);

  while(++i <= INTEIROS) {
    scanf("%d", &numero);
    if (max < numero) {
      max = numero;
    }
  }
  
  printf("%d\n", max);
  return 0;
}