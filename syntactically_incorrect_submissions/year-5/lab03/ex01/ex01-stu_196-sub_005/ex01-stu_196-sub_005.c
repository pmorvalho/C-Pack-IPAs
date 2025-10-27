

#include <stdio.h>

void quadrado(int n) 
{
	for (int i=0; i<n; i++) {
		for (int j=1; j<=n; j++) {
			printf("%d\t", i+j);
		}
		printf("\n");
	}
}

int main() 
{
	int n;
	
	scanf("%d", &n);

	quadrado(n);

	return 0;
}
