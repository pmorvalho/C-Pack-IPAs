#include <stdio.h>

#define VECMAX 100



int main() {
	int valores[VECMAX], n, i, j, max = 0;

	scanf("%d", &n);
	for (i = 0; (i < n && i < VECMAX); i++) {
		scanf("%d", &valores[i]);
		if (valores[i] > max)
			max = valores[i];
	}
	for (j = 0; j < max; j++) {
		for (i = 0; i < n; i++) {
			valores[i]++ >= max ? printf("*") : printf(" ");
		}
		printf("\n");
	}

	return 0;
}
