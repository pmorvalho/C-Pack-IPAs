#include <stdio.h>

int main() {
	int X, Y, Z, menor, meio, maior;

	scanf("%d%d%d", &X, &Y, &Z);

	if (X <= Y && X <= Z) {
		menor = X;
		if (Y <= Z) {
			meio = Y;
			maior = Z;
		}
		else {
			meio = Z;
			maior = Y;
		}
	}
	else if (Y <= X && Y <= Z) {
		menor = Y;
		if (X <= Z) {
			meio = X;
			maior = Z;
		}
		else {
			meio = Z;
			maior = X;
		}
	}
	else {
		menor = Z;
		if (X <= Y) {
			meio = X;
			maior = Y;
		}
		else {
			meio = Y;
			maior = X;
		}
	}

	printf("%d %d %d\n", menor, meio, maior);

	return 0;
}
