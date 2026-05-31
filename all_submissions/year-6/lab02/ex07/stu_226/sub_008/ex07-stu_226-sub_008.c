

#include <stdio.h>

int main() {
	int n, contador = 0;

	scanf("%d", &n);

	for(int i = 1; i<=n; i++)
		if (i%2 == 0)
			contador++;
	
	printf("%d\n", contador);
}