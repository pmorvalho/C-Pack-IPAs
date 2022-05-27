#include <stdio.h>

#define DIM 2
#define MAIS 1
#define MENOS 0
#define DENTRO 1
#define FORA 0



void calculadora(int numero[], int operation) {
  if (operation == MAIS)
	numero[0] += numero[1];
  else
	numero[0] -= numero[1];
}

int main() {
  int numero[DIM] = {0, 0};
  int c, operation = MAIS, estado = DENTRO;

  while ((c = getchar()) != EOF) {
	if (c >= 48 && c <= 57) {
	  estado = DENTRO;
	  numero[1] = numero[1] * 10 + (c - 48);
	}

	if (c == ' ' && estado == DENTRO) {
	  calculadora(numero, operation);
	  estado = FORA;
	  numero[1] = 0;
	}

	if (c == '+')
	  operation = MAIS;
	else if (c == '-')
	  operation = MENOS;
  }
  calculadora(numero, operation);
  printf("%d\n", numero[0]);

  return 0;
}
