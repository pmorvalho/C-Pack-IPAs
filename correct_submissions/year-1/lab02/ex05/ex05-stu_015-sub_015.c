#include <stdio.h>

#define MENOR 1

int main(){
	int n, i;
	scanf("%d", &n);


	for(i = MENOR; i <= n; i++){
		printf("%d\n", i);
	}
	return 0;


}