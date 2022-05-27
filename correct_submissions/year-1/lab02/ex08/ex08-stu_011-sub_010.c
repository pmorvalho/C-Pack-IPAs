#include <stdio.h>

int main() {
	int N;
	float soma, x, contador, media;
	contador = 1;

	scanf("%d", &N);

	while (contador <= N) {
		scanf("%f", &x);
		soma = soma + x;
		contador++;
	}

	media = soma/N;

	printf("%.2f\n", media);

	return 0;
}
