#include <stdio.h>

int main()
{
	int i, n, div=0;

	scanf("%d", &n);

	for (i=1; i<=n; ++i)
	{
		if (n%i == 0)
			++div;
	}

	printf("%d\n", div);
	return 0;
}