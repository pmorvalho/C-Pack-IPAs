#include <stdio.h>

#define VECMAX 100

int main()
{
	int n, i, j, max = 0;
	int in[VECMAX];

	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &in[i]);
		if(in[i] > max)
			max = in[i];
	}

	for(i = 0; i < max; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(i < in[j])
				putchar('*');
			else
				putchar(' ');
		}
		putchar('\n');
	}

	return 0;
}
