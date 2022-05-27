#include <stdio.h>

int main()
{
	int n, dig, n_dig=0, soma=0;

	scanf("%d", &n);

	while (n>0)
	{
		++n_dig;
		dig = n % 10; 
		n = n/10; 
		soma = soma + dig;
	}
	printf("%d\n%d\n", n_dig, soma);
	return 0;
}