#include <stdio.h>

int main(){
	int n,digitos,soma,dig;
	digitos=soma=0;
	scanf("%d",&n);
	while (n>0){
		dig=n%10;
		soma=soma+dig;
		digitos=digitos+1;
		n=n/10;
	}
	printf("%d\n%d\n",digitos,soma);
	return 0;
}
