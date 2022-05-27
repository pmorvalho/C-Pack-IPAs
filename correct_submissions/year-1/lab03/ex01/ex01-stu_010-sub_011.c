#include <stdio.h>

void quadrado(int N)
{
	int linha, col, n;
	for (linha=1; linha <= N; ++linha) 
	{
		n = linha; 

		for (col=1; col < N; ++col) 
		{
			printf("%d\t", n);
			++n;
		}

		printf("%d\n", n); 
	}
}


int main()
{
	int n;

	scanf("%d", &n);
	quadrado(n);
	return 0;
}