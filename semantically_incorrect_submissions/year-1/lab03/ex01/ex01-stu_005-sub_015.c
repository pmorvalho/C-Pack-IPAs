#include <stdio.h>


void quadrado(int N)
{
	int i, j;

	for(i = 0; i < N; i++)
	{
		for(j = 1; j <= N; j++)
		{
			printf("%d\t", i + j);
		}
		printf("\n");
	}
}

int main()
{
	int in;
	scanf("%d", &in);

	quadrado(in);

	return 0;
}
