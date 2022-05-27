#include <stdio.h>
#define VEMAX 100


int main(){
	int n,vec[VEMAX],i,num,j,maior=0;
	scanf("%d",&n);
	for (i=0;i<n;++i){
		scanf("%d",&num);
		vec[i] = num;
		if (vec[i] > maior)
			maior = vec[i];

		}
	
	for (j = 0; j< maior; ++j){
		for (i=0;i<n;++i){
			if (vec[i] > 0){
				printf("*");
				vec[i] = vec[i] - 1;}
			else
				printf(" ");
			
		}
        printf("\n"); 
	}
	return 0;
	
}