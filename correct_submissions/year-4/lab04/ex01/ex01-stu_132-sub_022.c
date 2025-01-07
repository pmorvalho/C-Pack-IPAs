#include <stdio.h>
#define VECMAX 100

int main() {
	int dim, i, j;
	int vec[VECMAX];
	scanf("%d", &dim);
	if (dim > VECMAX) {
		return 1;
	}
	for (i = 0; i < dim; i++) {
		scanf("%d", &vec[i]);
	}
	for (i = 0; i < dim; i++) {
		for (j = 0; j < vec[i]; j++) {
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}
