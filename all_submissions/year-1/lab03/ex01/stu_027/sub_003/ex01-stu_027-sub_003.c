#include<stdio.h>

void quadrado(int n) {
	int col, row;
	if(n < 2)
		return;
	for(row = 1; row <= n; row++) {
		printf("%d", row);
		for(col = row + 1; col < row + n; ++col)
			printf("\t%d", col);
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
