#include <stdio.h>



int main() {
	int quant;
	float menor;
	float maior;
	float atual;
	
	scanf("%d", &quant);
	while (quant <= 0) {
		
		scanf("%d", &quant);
	}
	
	scanf("%f", &menor);
	maior = menor;
	quant -= 1.0;
	while (quant > 0) {
		
		scanf("%f", &atual);
		if (atual < menor) { 
			menor = atual;
		} else if (atual > maior) {
			maior = atual;
		}
		quant -= 1.0;
	}
	printf("min: %f, max: %f\n", menor, maior);
	return 0;
}
