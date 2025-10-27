

#include <stdio.h>

void quadrado(int n) 
{
	for (int i=0; i<n; i++) {
		for (int j=1; j<=n; j++) 
		{
			if (j == n && i != n-1) 
			{
				printf("%d\n", i+j);
			}
			else
			{
				printf("%d\t", i+j);
			}
		}
	}
}

int main() 
{
	int n;
	
	scanf("%d", &n);

	quadrado(n);

	return 0;
}
