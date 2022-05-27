#include <stdio.h>

#define VECMAX 100

int main(){

	int tab[VECMAX], dim, i, j, n;

	scanf("%d", &dim);

	if(dim > VECMAX)
		dim = VECMAX;

	for(i = 0; i < dim; i++){

		scanf("%d", &n);
		tab[i] = n;
	}

	for(i = 0; i < dim; i++){

		for(j = 0; j < tab[i]; j++)
			printf("%c", '*');

		printf("\n");
	}

	return 0;
}
