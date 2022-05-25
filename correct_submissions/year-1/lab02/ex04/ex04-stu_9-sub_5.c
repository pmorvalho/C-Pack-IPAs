#include <stdio.h>

#define INFERIOR 1
#define SUPERIOR 3
#define PASSO 1

int main()
{
	int contador;

	int n;
	int maior, menor, meio;

	for (contador = INFERIOR; contador <= SUPERIOR; contador += PASSO)
	{
		scanf("%d", &n);

		if (contador == INFERIOR){
			maior = n;
			menor = n;}
		else if (maior < n) {
			meio = maior;
			maior = n;}
		else if (menor > n) {
			meio = menor;
			menor = n;}
		else {
			meio = n;
		}
	}
	printf("%d %d %d\n", menor, meio, maior);
	return 0;
}
