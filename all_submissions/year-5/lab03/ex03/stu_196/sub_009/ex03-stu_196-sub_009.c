

#include <stdio.h>

void cruz(int n)
{
	int i, j;
	
	for (i = 0; i<n; i++) {
		for (j = 0; j<n; j++) {

			if (i == j || (n-i-1) == j)
				printf("*");
			else
				printf("-");

			if (j == n-1) 
				printf("\n");
			else
				printf(" ");
		}
	}
}


int main() 
{
	int n;

	scanf("%d", &n);

	cruz(n);

	return 0;
}
