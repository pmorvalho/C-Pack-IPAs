

#include <stdio.h>
#include <stdbool.h>

#define VECMAX 100

int main() 
{
	int n, i, j;
	int x;
	
	scanf("%d", &n);

	for (i=0; i<n; i++)
	{
		scanf("%d", &x);
		
		for (j=0; j<x; j++)
		{
			putchar('*');
		}

		putchar('\n');
	}

	return 0;
}
