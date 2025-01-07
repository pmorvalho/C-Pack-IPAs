#include <stdio.h>

int main  () {
	int N, acumulador=0, contador=0;
	
	scanf("%d", &N);
	
	while (N) {
		contador++;
		acumulador += N%10;
		N = N/10;
	}
	
	printf("%d\n%d\n", contador, acumulador);
	
	return 0;
}
