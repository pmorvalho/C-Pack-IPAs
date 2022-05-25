#include <stdio.h>

int main(){
	float n,soma;
	int contador,i;
	scanf("%d",&contador);
	scanf("%f",&n);
	soma=n;
	for(i=1;i<contador;i++){
		scanf("%f",&n);
		soma=soma+n;
	}
	printf("%.2f\n",soma/contador);
	return 0;
}
