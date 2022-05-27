#include <stdio.h>

#define INFERIOR 1
#define PASSO 1

int main() {
	int contador;

	int superior;

	float n, min, max;	

	scanf("%d", &superior);
	for (contador = INFERIOR; contador <= superior; contador += PASSO)
	{
		scanf("%f", &n);
		if (contador == INFERIOR) {
			max = n;
			min = n;}
		else if (max < n) {
			max = n;}
		else if (min > n) {
			min = n;		
		}
	}
	printf("min: %f, max: %f\n", min, max);
	return 0;
}
