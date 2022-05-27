#include <stdio.h>

int main(){

	int n, m;
	scanf("%d %d", &n, &m);

	if (n % m == 0){
		printf("yes");
	}
	else {
		printf("no");
	}
	return 0;
}