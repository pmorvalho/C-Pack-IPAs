#include <stdio.h>

void cruz(int N)
{
	int i, j;

	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			if(i == j || N-i == j+1) printf("* ");
			else printf("- ");
		}
		printf("\n");
	}
}

int main()
{
	int in;
	scanf("%d", &in);

	cruz(in);

	return 0;
}
