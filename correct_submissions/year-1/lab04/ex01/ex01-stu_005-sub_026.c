#include <stdio.h>

#define VECMAX 100

int main()
{
	int n, i, j;
	int in[VECMAX];

	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &in[i]);

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < in[i]; j++)
			putchar('*');
		putchar('\n');
	}

	return 0;
}
