#include<stdio.h>

void quadrado(int n) {
	int col, row;
	if(n < 2)
		return;
	for(row = 1; row <= n; row++) {
		for(col = row; col < row + n; col++)
			printf("%d\t", col);
		printf("\n");
	}
	return;
}

int main(void) {
	int in;
	scanf("%d", &in);
	quadrado(in);
	return 0;
}
