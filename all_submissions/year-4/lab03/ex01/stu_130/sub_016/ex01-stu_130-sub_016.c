

#include <stdio.h>


void quadrado(int n){
	int i,j;
	
	for(i = 1; i <= n; i++){
		for (j = 1; j <= n; j++){
			printf("%d\t", i + j - 1);
			if (j != n) putchar('\t');	
		}
		
		putchar('\n'); 
	} 
}


int main(){
	int n;
	scanf("%d", &n);
	
	while(n < 2){
		scanf("%d", &n);
	}
	quadrado(n);
	return 0;
}
