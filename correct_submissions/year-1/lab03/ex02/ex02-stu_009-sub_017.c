#include <stdio.h>

#define LINHA_INICIAL 1
#define NUM_INICIAL 1
#define DIMINUI -1
#define AUMENTA 1
#define NUM_INICIAL_COLOCADOS 0

void piramide(int n)
{
	int linha;
	int num;
	int passo;

	int num_colocados;
	int max_colocados;
	int num_max;
	int espacos;
	int num_espacos;

	for (linha = LINHA_INICIAL; linha <= n; linha++) 
	{
		num = NUM_INICIAL;
		max_colocados = linha*2-1;
		num_max = linha;
		passo = AUMENTA;
		num_espacos = (n-linha)*2;
		
		for (espacos = 0; espacos < num_espacos; espacos++)
		{
			putchar(' ');
		}

		for (num_colocados = NUM_INICIAL_COLOCADOS; num_colocados < max_colocados-1; num_colocados++)
		{
			printf("%d ", num);
			if (num == num_max) {
				passo = DIMINUI;}
			num += passo;
		}
		printf("%d\n", num);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	piramide(n);
	return 0;
}
