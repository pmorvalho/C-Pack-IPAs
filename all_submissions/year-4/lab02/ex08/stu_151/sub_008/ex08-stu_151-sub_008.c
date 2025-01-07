#include <stdio.h>

int main() {
	int N;
	float num, acumulador = 0, media;
	
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%f", &num);
		acumulador += num;
	}
	
	media = acumulador/N;
	
	printf("%.2f\n", media);
	
	return 0;
}
