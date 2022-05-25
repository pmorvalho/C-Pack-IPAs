#include <stdio.h>

#define VECMAX 100

void grafico_h(int dim){
	int i, i2, item;
	int tab[VECMAX];

	for(i = 0; i < dim; i++){
		scanf("%d", &item);
		tab[i] = item;
	}

	for(i = 0; i < dim; i++){
		for (i2 = 0; i2 < tab[i]; i2++){
			printf("*");
		}
		printf("\n");
	}
}


int main(){
	int n;
	scanf("%d", &n);
	grafico_h(n);
	return 0;
}
