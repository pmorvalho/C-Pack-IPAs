

#include <stdio.h>

int main() {
	int a, b, c;

	printf("Diga 3 numeros: ");
	scanf("%d %d %d",&a, &b, &c);

	if (a > b && a > c) {
		printf("O maior numero e:%d\n",a);
	} else if (b > a && b > c) {
		printf("O maior numero e:%d\n",b);
	} else {
		printf("O maior numero e:%d\n",c);
	}
	return 0;
}