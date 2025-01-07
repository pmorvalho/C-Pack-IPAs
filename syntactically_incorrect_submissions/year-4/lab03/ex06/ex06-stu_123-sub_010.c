#include <stdio.h>

int main() {
  int c, soma = 0;

  while ((c = getchar()) != EOF) {
    printf("char = %d\n", c);
    soma += c - '0';
  }
  printf("%s\n", soma % 9 ? "no" : "yes");
}
