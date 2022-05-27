#include <stdio.h>


void quadrado(int n)
{
	int i, j;

	for(i = 1; i <= n; i++) {
		for(j = i; j < n+i; j++)
			printf("%d\t", j);
		printf("\n");
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	if (n < 2) return 1;

	quadrado(n);
	return 0;
}
