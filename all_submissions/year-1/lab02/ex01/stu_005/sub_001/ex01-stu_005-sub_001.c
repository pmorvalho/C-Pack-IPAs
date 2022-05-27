#include <stdio.h>

int main()
{
	int i, n, maior;
	scanf("%d", &maior);

	for(i = 0; i < 2; i++)
	{
		scanf("%d", &n);
		maior = n > maior ? n : maior;
	}
	printf("%d\n", maior);

	return 0;
}
