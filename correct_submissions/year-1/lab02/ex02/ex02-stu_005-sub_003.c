#include <stdio.h>

int main()
{
	int menor, maior;
	scanf("%d", &menor);
	scanf("%d", &maior);

	if(menor > maior)
	{
		int tmp = menor;
		menor = maior;
		maior = tmp;
	}

	printf("%d\n%d\n", menor, maior);

	return 0;
}
