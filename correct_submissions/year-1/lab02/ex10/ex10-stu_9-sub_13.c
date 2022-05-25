#include <stdio.h>

#define INFERIOR 0
#define PASSO 1
#define DIV 10

int n_digitos(int n)
{
	int count = 0;

	while (n != 0)
	{	
		n /= DIV;
		count++;
	}
	return count;	
}

int soma_digitos(int n)
{
	int soma = 0;
	while (n != 0)
	{
		soma += n % DIV;
		n /= DIV;
	}
	return soma;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n%d\n", n_digitos(n), soma_digitos(n));
	return 0;
}
