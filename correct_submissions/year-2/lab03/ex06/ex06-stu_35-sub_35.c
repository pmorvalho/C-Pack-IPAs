#include <stdio.h>

#define DIVISAO 9



int main() {
  int soma_dig = 0;
  char c;

  while ((c = getchar()) != EOF)
    if (c != ' ' && c != '\n')
      soma_dig += c - 48;

  if (soma_dig % DIVISAO == 0)
    printf("yes\n");
  else
    printf("no\n");

  return 0;
}
