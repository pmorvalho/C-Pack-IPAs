# include <stdio.h>

int main()
{
	int numero = 0, soma = 0, contador = 0, digito = 0;

	scanf("%d", &numero);

	for(contador = 0; numero != 0; contador++)
	{
	digito = numero % 10;
	soma = soma + digito;
	numero = numero / 10;
	}

	printf("%d\n%d\n", contador, soma);

	return 0;
}
