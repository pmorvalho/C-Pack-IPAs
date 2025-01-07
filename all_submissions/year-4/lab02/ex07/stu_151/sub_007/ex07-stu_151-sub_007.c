#include <stdio.h>

int main() {
	int N, acumulador = 0;
	
	scanf("%d", &N);
	
	for (int i = 1; i <= N; i++) {
		if (N%i == 0)  {
			acumulador++;
		}
	}
	printf("%d\n", acumulador);
}
