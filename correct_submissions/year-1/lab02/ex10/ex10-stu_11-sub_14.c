#include <stdio.h>

int main() {
	int N, soma, contador, digito;
	contador = 0;
	soma = 0;

	scanf("%d", &N);

	while (N != 0) {
		digito = N % 10;
		soma = soma + digito;
		contador++;
		N = N / 10;
	}

	printf("%d\n%d\n", contador, soma);

	return 0;
} 
