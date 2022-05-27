#include <stdio.h>

#define VECMAX 100
#define True 1
#define False 0


void grafico_h(int dim){
	int i, end, item;
	int tab[VECMAX];
	end = False;

	for(i = 0; i < dim; i++){
		scanf("%d", &item);
		tab[i] = item;
	}

	while(end == False){
		for(i = 0; i < dim; i++){
			if(--tab[i] >= 0){
				printf("*");
				end = False;
			} else {
				printf(" ");
				end = True;
			}
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
