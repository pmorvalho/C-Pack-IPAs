#include <stdio.h>

#define INFERIOR 1
#define SUPERIOR 3
#define PASSO 1

int main()
{
	int maior;
	int input;
	int contador;

	for (contador = INFERIOR; contador <= SUPERIOR; contador += PASSO)
	{
		scanf("%d", &input);
		if (contador == 1 || maior < input) {
			maior = input;
		}
	}
	printf("Maior: %d\n", maior);
	return 0;
}
