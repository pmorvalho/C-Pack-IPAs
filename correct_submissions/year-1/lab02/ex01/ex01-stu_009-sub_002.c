#include <stdio.h>

#define INFERIOR 1
#define SUPERIOR 3
#define PASSO 1

int main()
{
	int contador;

	int n;

	int maior;

	for (contador = INFERIOR; contador <= SUPERIOR; contador += PASSO)
	{
		scanf("%d", &n);
		if (contador == 1 || maior < n) {
			maior = n;
		}
	}
	printf("%d\n", maior);
	return 0;
}
