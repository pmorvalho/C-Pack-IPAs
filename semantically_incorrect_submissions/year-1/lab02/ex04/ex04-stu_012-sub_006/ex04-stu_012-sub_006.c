#include <stdio.h>



int main() {
	int x;
	int meio;
	int menor;
	printf("Introduza o primeiro inteiro:\n");
	scanf("%d", &meio);
	printf("Introduza o segundo inteiro:\n");
	scanf("%d", &x);
	if (x < meio) {
		menor = x;
	} else {
		menor = meio;
		meio = x;
	}
	printf("Introduza o terceiro inteiro:\n");
	scanf("%d", &x);
	if (x < menor) {
		printf("%d %d %d\n", x, menor, meio);
	} else if (x < meio) {
		printf("%d %d %d\n", menor, x, meio);
	} else {
		printf("%d %d %d\n", menor, meio, x);
	}
	return 0;
}
