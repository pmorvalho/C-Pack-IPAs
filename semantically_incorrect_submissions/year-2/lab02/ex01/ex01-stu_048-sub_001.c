#include <stdio.h>

int main()
{
	int num1, cont=0, num, maior;
	printf("Escreva um numero inteiro:");
	scanf("%d", &num1);
	maior = num1;
	while (cont < 2)
	{
		printf("Escreva um numero inteiro:");
		scanf("%d", &num);
		if (num >= num1)
		{
			maior = num;
		}
		cont++;
	}
	printf("%d\n", maior);
	return 0;
}

