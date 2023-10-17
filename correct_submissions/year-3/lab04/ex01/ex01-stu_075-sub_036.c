

#include <stdio.h>

#define VECMAX 100

int main() {
	int n, i, j, layerSize[VECMAX];
	scanf("%d", &n);
	if (n > VECMAX)
		return 1;
	for (i = 0; i < n; i++)	
	    scanf("%d", &layerSize[i]);
	for (i = 0; i < n; i++) {
		for (j = 0; j < layerSize[i] - 1; j++)
			printf("*");
		printf("*\n");
	}
	return 0;
}