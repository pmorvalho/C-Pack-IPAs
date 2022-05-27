#include <stdio.h>

#define VECMAX 100

int main(){

	int tab[VECMAX], dim, i, n, max = 0;

	scanf("%d", &dim);

	for(i = 0; i < dim; i++){

		scanf("%d", &n);

		tab[i] = n;

		if(max < n)
			max = n;
	}

	for(max = max; max > 0; max--){

		for(i = 0; i < dim; i++){

			if(tab[i] == max){
				printf("%c", '*');
				tab[i]--;

			} else {
				printf(" ");

			}
		}

		printf("\n");
	}

	return 0;
}
