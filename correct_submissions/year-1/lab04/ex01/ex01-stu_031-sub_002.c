#include <stdio.h>
#define VEMAX 100


int main(){
	int n,vec[VEMAX],i,num,j;
	scanf("%d",&n);
	for (i=0;i<n;++i){
		scanf("%d",&num);
		vec[i] = num;
		for (j=0;j<vec[i];++j){
			printf("*");

		}
		printf("\n");
	}
	return 0;
	
}