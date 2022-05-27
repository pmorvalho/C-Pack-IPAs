#include <stdio.h>

int main() {
	int N, contador;
	contador = 1;

	scanf("%d", &N);

	while (contador <= N) {
		printf("%d\n", contador);
		contador++;
	}

	return 0;
}
