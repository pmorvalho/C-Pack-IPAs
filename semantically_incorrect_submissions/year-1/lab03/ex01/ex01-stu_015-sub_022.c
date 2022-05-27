#include <stdio.h>

void quadrado(int N);

int main()
{
	int N = 0;

	scanf("%d", &N);
	while (N <= 2);
	quadrado(N);
	return 0;
}

void quadrado(int N)
{	int valor, digito, contador;
	for (digito = 1; digito <= N; digito++)
	{	valor = digito;
		contador = 1;
		do{
			printf("%d\t", valor);
			valor++;
			contador++;
		} while (contador <= N);
		putchar('\n');
	}
}