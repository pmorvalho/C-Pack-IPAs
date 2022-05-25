#include <stdio.h>

int main() {
	float novo, soma, media;
	int maximo, contador;
	scanf("%d", &maximo);

	for(contador = 0; contador < maximo; contador++) {
		scanf("%f",&novo);
		soma = soma + novo;
	}

	media = soma / maximo;
	printf("%.2f\n", media);

	return 0;
}
