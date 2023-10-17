

#include <stdio.h>

#define VECMAX 100

int main() {
	int again = 1, n, i, layerSize[VECMAX];
	scanf("%d", &n);
	if (n > VECMAX)
		return 1;
	for (i = 0; i < n; i++)
		scanf("%d", &layerSize[i]);
	while (1) {
		again = 0;
		for (i = 0; i < n; i++) {
			if (layerSize[i] > 0) {
				printf("*");
				layerSize[i]--;
				again = 1;
			}
            else
                printf(" ");
		}
        if (again == 1)
		    printf("\n");
        else
            break;
	}
	return 0;
}