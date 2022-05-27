#include <stdio.h>

int main()
{
	int n;
	int m;
	
	int menor;
	int maior;
		
	scanf("%d%d", &n, &m);

	if (n <= m) {
		menor = n;
		maior = m;}
	else {
		menor = m;
		maior = n;
	}

	printf("%d\n%d\n", menor, maior);
	return 0;
}

