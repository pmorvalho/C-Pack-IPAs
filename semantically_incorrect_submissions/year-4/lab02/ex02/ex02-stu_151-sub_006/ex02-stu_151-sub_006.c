#include <stdio.h>

int main () {
	int M, N, maior, menor;
	
	scanf("%d %d", &M, &N);
	
	M > N ? (maior = M, menor = N) : (maior = N, menor = M);
	
	printf("%d\n%d\n", maior, menor);

	return 0;
}
