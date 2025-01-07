
#include <stdio.h>

int main() {
	int n, soma = 0, cont = 0;
	scanf("%d", &n);
	while (n > 0) {
		soma += (n % 10);
		n /= 10;
		cont += 1;
	}
	printf("%d\n%d\n", cont, soma);
	return 0;
}