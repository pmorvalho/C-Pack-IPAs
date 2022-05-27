#include <stdio.h>

#define SIMBOLO '-'
#define SEPARADOR '*'
#define LINHA_INICIAL 1
#define COLUNA_INICIAL 1


void cruz(int n)
{
	int linha;
	int coluna;

	for (linha = LINHA_INICIAL; linha <= n; linha++) 
	{
		for (coluna = COLUNA_INICIAL; coluna <= n ; coluna++)
		{
			if (linha == coluna || (n-linha+1) == coluna ||  coluna-n+1 == linha || coluna-n+1 == linha-n+1) {			
				putchar(SEPARADOR);}
			else {
				putchar(SIMBOLO);}
		}
		putchar('\n');
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	cruz(n);
	return 0;
}
