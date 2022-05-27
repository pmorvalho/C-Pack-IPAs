#include <stdio.h>

#define INFERIOR 1
#define SUPERIOR n
#define PASSO 1


int main()
{
	int contador;

	int n;

	scanf("%d", &n);
	
	for (contador = INFERIOR; contador <= SUPERIOR; contador += PASSO)
	{
		printf("%d\n", contador);
	}

	return 0;	
}
