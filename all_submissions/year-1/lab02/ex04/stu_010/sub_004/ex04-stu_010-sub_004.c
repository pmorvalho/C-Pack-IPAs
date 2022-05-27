#include <stdio.h>

int main()
{
	int x, y, z;
	int menor, maior;

	scanf("%d%d%d", &x, &y, &z);

	if (x > y)
	{
		maior = x;
		menor = y;
	}
	else
	{
		maior = y;
		menor = x;
	}

	if (z > maior)
		printf("%d %d %d\n", menor, maior, z);

	else if (z < menor)
		printf("%d %d %d\n", z, menor, maior);

	else
		printf("%d %d %d\n", menor, z, maior);

	return 0;
}