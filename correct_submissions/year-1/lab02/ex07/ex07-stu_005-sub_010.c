#include <stdio.h>

int main()
{
	int n, i, div = 0;
	scanf("%d", &n);

	for(i = 1; i <= n; i++)
	{
		if(n % i == 0) div++;
	}

	printf("%d\n", div);

	return 0;
}
