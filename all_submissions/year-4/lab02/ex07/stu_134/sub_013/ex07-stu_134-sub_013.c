

#include <stdio.h>

int main(){
	int N, i, div=0;
	scanf("%d",&N);
	for (i=1; i<=N; i++){
		if (N%i==0){
			div++;
		}
	}
	printf("%d\n", div);
	return 0;
}
