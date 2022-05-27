#include <stdio.h>
#define VECMAX 100



int main()
{
	int n, i, l;
	int maior = 0, num[VECMAX];

	scanf("%d", &n);

	for (i = 0; i < n; ++i)
	{
		scanf("%d", &num[i]);
		if (num[i] > maior)
			maior = num[i];
	}

	for (l = maior; l > 0; --l)
	{
		for (i = 0; i < n; ++i)
		{
			if (num[i] >= l)
				putchar('*');
			else
				putchar(' ');
		}
		putchar('\n');
	}
	
	return 0;
}