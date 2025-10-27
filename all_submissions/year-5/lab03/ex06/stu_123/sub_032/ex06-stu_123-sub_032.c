
#include <stdio.h>
#include <strings.h>

#define TAMANHO_MAXIMO 101

int somaDigitos(char n[]) {
  int soma = 0;
  int len = strlen(n);

  for (int i = 0; i < len; i++)
    soma += n[i] - '0';

  return soma;
}

int divisivelPorNove(char n[]) {
  int soma = somaDigitos(n);

  return soma % 9 == 0;
}

int main() {
  char numero[TAMANHO_MAXIMO];

  scanf("%s", numero);

  printf("%s\n", divisivelPorNove(numero) ? "yes" : "no");
  return 0;
}

