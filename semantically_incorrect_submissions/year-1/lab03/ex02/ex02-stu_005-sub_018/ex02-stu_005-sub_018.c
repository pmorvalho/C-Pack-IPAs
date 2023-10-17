#include <stdio.h>

void piramide(int N)
{
	int i, j;

	for(i = 0; i < N; i++)
	{
		for(j = 1; j < N-i; j++)
			printf(" ");
		for(j = 1; j < 1+i; j++)
			printf("%d", j);
		for(j = 1+i; j > 0; j--)
			printf("%d", j);
		printf("\n");
	}
}

int main()
{
	int in;
	scanf("%d", &in);

	piramide(in);

	return 0;
}
