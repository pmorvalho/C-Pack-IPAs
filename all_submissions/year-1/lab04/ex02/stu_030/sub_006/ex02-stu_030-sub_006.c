#include <stdio.h>

#define VECMAX 100
#define True 1
#define False 0


void grafico_h(int dim){
	int i, end, item;
	int tab[VECMAX];
	char ptab[VECMAX];
	end = False;

	for(i = 0; i < dim; i++){
		scanf("%d", &item);
		tab[i] = item;
	}

	while(end == False){
		for(i = 0; i < dim; i++){
			if(--tab[i] >= 0){
				ptab[i] = '*';
				end = False;
			} else {
				ptab[i] = ' ';
				end = True;
			}
		}
		if(end == False){
			for (i = 0; i < dim; i++){
				putchar(ptab[i]);
			}
			printf("\n");
		}
	}



}


int main(){
	int n; 
	scanf("%d", &n);
	grafico_h(n);
	return 0;
}
