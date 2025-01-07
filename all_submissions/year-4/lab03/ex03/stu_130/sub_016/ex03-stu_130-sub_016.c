#include <stdio.h>

void cruz( int n){
	int i, j;
	
	
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			printf("%c", (i == j || j + i  == n -	 + 1) ? '*' : '-');
			if (j != n) putchar(' ');
		}
		putchar('\n');
	}
}

int main (){
	int n;
	
	scanf("%d", &n);
	cruz(n);
	return 0;
}
