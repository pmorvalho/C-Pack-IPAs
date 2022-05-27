#include <stdio.h>

#define VECMAX 100



int main() {
	int valores[VECMAX], n, i, j;

	scanf("%d", &n);
	for (i = 0; (i < n && i < VECMAX); i++) {
		scanf("%d", &valores[i]);
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < valores[i]; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
