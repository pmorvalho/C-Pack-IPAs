#include <stdio.h>



int main() {
	int x;
	int cont=0;
	int soma=0;
	
	scanf("%d", &x);
	while (x <= 0) {
		
		scanf("%d", &x);
	}
	while (x > 0) {
		cont += 1;
		soma = soma + (x%10);
		x = x/10;
	}
	printf("%d\n%d\n", cont, soma);
	return 0;
}
