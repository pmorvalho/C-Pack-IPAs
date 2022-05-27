#include <stdio.h>

#define LINHA_INICIAL 1
#define COLUNA_INICIAL 1
#define NUM_INICIAL 1
#define PASSO_HORIZONTAL 1
#define PASSO_VERTICAL 1

void quadrado(int n)
{
	int linha, coluna;
	int num = NUM_INICIAL;

	for (linha = LINHA_INICIAL; linha <= n; linha++) 
	{
		for (coluna = COLUNA_INICIAL; coluna < n; coluna++)
		{
			printf("%d\t", num);
			num += PASSO_HORIZONTAL;
		}
		printf("%d\n", num);
		num = NUM_INICIAL + PASSO_VERTICAL*linha;
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	quadrado(n);
	return 0;
}
