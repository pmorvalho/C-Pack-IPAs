#include <stdio.h>

int main(){
	int c=getchar(),resultado=0;
	while(c>='0' && c<='9'){
		resultado=resultado+(c-'0');
		c=getchar();
	}
	if(resultado%9==0)
		printf("yes\n");
	
	else
		printf("no\n");
	return 0;
}
