#include <stdio.h>
#define VECMAX 100

int main()
{
	int n, num[VECMAX];
	int i, j;

	scanf("%d", &n);

	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}

	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < num[i]; j++)
			putchar('*');

		putchar('\n');
	}
	return 0;
}