#include <stdio.h>

int main()
{
	int n, digitos = 0, soma = 0;

	scanf("%d", &n);

	while(n > 0)
	{
		soma += n % 10;
		digitos++;
		n /= 10;
	}

	printf("%d\n%d\n", digitos, soma);

	return 0;
}
