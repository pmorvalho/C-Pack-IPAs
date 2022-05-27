#include <stdio.h>

int main() {
	int N, contador;
	float x, max, min;
	contador = 1;

	scanf("%d", &N);
	scanf("%f", &x);

	min = x, max = x;

	while (contador < N) {
		scanf("%f", &x);
		if (x < min) {
			min = x;
		}
		else if (x > max) {
			max = x;
		}
		contador++;
	}

	printf("min: %f, max: %f\n", min, max);

	return 0;

}
