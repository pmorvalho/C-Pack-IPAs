

#include <stdio.h>
#include <stdbool.h>

#define VECMAX 100

int main() 
{
	int n, x;
	int i, j;
	int max = -1;

	int a[VECMAX];

	scanf("%d", &n);

	for (i=0; i<n; i++)
	{
		scanf("%d", &x);
		
		max = x > max ? x : max;
		a[i] = x;
	}

	printf("Max: %d\n", max);

	for (i=0; i<max; i++)
	{
		for (j=0; j<n; j++)
		{
			putchar(i+1 <= a[j] ? '*' : ' ');
		}

		putchar('\n');
	}

	return 0;
}
