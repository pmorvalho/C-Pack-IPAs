#include <stdio.h>
#define VECMAX 100

int main()
{
	int n, num[VECMAX];
	int i, j, maior = 0;

	scanf("%d", &n);

	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] > maior)
			maior = num[i];
	}


	for (i = 0; i < maior; i++)
	{
		for (j = 0; j < n; ++j)
		{

			if (num[j] >= i + 1)
				putchar('*');

			else
				putchar(' ');
		}
		putchar('\n');
	}
	return 0;
}