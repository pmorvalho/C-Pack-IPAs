

#include <stdio.h>

#define VECMAX 100

int main() {
	int n, i, j, max = 0, layerSize[VECMAX];
	scanf("%d", &n);
	if (n > VECMAX)
		return 1;
	for (i = 0; i < n; i++) {
		scanf("%d", &layerSize[i]);
        if (max < layerSize[i])
            max = layerSize[i];
    }
	for (i = 0; i < max; i++) {
        for (j = 0; j < n; j++) {
            if (layerSize[j] > 0) {
                printf("*");
                layerSize[j]--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
	return 0;
}