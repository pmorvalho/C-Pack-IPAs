#include<stdio.h>

void piramide(int n) {
	int row, col;
	if(n < 2)
		return;
	for(row = 0; row < n; row++) {
		for(col = row + 1; col < n; col++)
			printf("  ");

		printf("1");
		for(col = 0; col < row; col++)
			printf(" %d", col + 2);
		
		for(col = row; col > 0; col--)
			printf(" %d", col);
		printf("\n");
	}
}

int main(void) {
	int in;
	scanf("%d", &in);
	piramide(in);
	return 0;
}
