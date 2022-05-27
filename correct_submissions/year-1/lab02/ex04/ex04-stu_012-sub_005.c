#include <stdio.h>



int main() {
	int x;
	int meio;
	int menor;
	
	scanf("%d", &meio);
	
	scanf("%d", &x);
	if (x < meio) {
		menor = x;
	} else {
		menor = meio;
		meio = x;
	}
	
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
